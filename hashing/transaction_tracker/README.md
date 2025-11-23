# TransactionTracker System (C++ • Hashing)

This project defines a **Transaction Tracker** to manage a collection of financial transactions.  
Each transaction has a unique `transaction_id` and stores both the `amount` and the `type` ("credit" or "debit").  
The system also supports updating, deleting, aggregating, and exporting transaction data.

---

## Overview

Each transaction is defined by:
- `transaction_id` (`std::string`)
- `amount` (`double`)
- `type` (`std::string`, must be `"credit"` or `"debit"`)

---

## Methods to Implement

### 1. `void add_transaction(const std::string& transaction_id, double amount, const std::string& type)`
- Adds or updates a transaction with the specified attributes.
- If a transaction with the same ID exists, its `amount` and `type` are updated.

#### Example
```cpp
tracker.add_transaction("T1", 100.0, "credit");
tracker.add_transaction("T1", 150.0, "debit");  // Updates existing transaction
2. std::optional<std::pair<double, std::string>> get_transaction(const std::string& transaction_id)
Returns a pair containing (amount, type) for the given transaction.

Returns std::nullopt if the transaction does not exist.

Example
cpp
Copy code
auto tx = tracker.get_transaction("T1");
// → {100.0, "credit"}
3. bool delete_transaction(const std::string& transaction_id)
Deletes a transaction from the tracker.

Returns true if the transaction was found and deleted, false otherwise.

Example
cpp
Copy code
tracker.delete_transaction("T1"); // true
tracker.delete_transaction("T5"); // false
4. std::map<std::string, double> get_aggregate_statistics()
Returns the total amounts grouped by transaction type.

The map has the following keys:

"total_credit" → Sum of all credits.

"total_debit" → Sum of all debits.

Example
cpp
Copy code
{
  "total_credit": 300.0,
  "total_debit": 50.0
}
5. std::string export_transactions(double min_amount = 0)
Exports all transactions with amount > min_amount as a formatted string.

Includes a Transactions section followed by a Statistics section.

The output must strictly follow this format:

Example Input
cpp
Copy code
tracker.add_transaction("T1", 100.0, "credit");
tracker.add_transaction("T2", 50.0, "debit");
tracker.add_transaction("T3", 200.0, "credit");
Example Output
yaml
Copy code
Transactions:
ID: T1, Amount: 100.0, Type: credit
ID: T2, Amount: 50.0, Type: debit
ID: T3, Amount: 200.0, Type: credit
Statistics:
Total Credit: 300.0
Total Debit: 50.0
Expected Behavior
Action	Description
Add Transaction	Inserts or updates transaction details.
Get Transaction	Retrieves (amount, type) pair by ID.
Delete Transaction	Removes a transaction if it exists.
Get Aggregate Statistics	Computes totals for credits and debits.
Export Transactions	Lists transactions above a threshold and prints totals.

Example Workflow
cpp
Copy code
TransactionTracker tracker;

tracker.add_transaction("T1", 100.0, "credit");
tracker.add_transaction("T2", 50.0, "debit");
tracker.add_transaction("T3", 200.0, "credit");

auto tx = tracker.get_transaction("T2");
// → {50.0, "debit"}

auto stats = tracker.get_aggregate_statistics();
// → { "total_credit": 300.0, "total_debit": 50.0 }

std::string output = tracker.export_transactions(0);
std::cout << output;
Output
yaml
Copy code
Transactions:
ID: T1, Amount: 100.0, Type: credit
ID: T2, Amount: 50.0, Type: debit
ID: T3, Amount: 200.0, Type: credit
Statistics:
Total Credit: 300.0
Total Debit: 50.0
Complexity
Operation	Complexity
add_transaction	O(1) average
get_transaction	O(1) average
delete_transaction	O(1) average
get_aggregate_statistics	O(n)
export_transactions	O(n)

Build and Run
bash
Copy code
g++ -std=c++17 hashing/transaction_tracker/main.cpp -o transaction_tracker
./transaction_tracker
Notes
Use std::unordered_map<std::string, std::pair<double, std::string>> to store transactions efficiently.

Ensure the output format for export_transactions matches the specification exactly (including labels and newlines).

When exporting, transactions should appear in the order they were added.

Rounding is not required unless specified, but ensure consistent decimal formatting using standard C++ output.