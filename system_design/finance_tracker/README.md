Finance Tracker (Users • Categories • Income vs Expense)
Task

Design a FinanceTracker that supports per-user categorized income/expense tracking.

Methods

bool add_income(const std::string& username, const std::string& category, float amount)
Add (or accumulate) income for a user/category; create user/category if missing. Return true on success.

bool add_expense(const std::string& username, const std::string& category, float amount)
Add (or accumulate) expense for a user/category; create user/category if missing. Return true on success.

std::optional<std::map<std::string, float>> get_balance(const std::string& username, const std::string& category)
If user/category exists, return a map with keys:

records = {
    "john_doe": {
        "income": {
            "salary": 1000.0
        },
        "expense": {
            "food": 200.0
        }
    },
    "jane_smith": {
        "income": {
            "freelance": 500.0
        },
        "expense": {
            "transport": 100.0
        }
    }
};

"income": total income

"expenses": total expenses

"balance": income − expenses
Otherwise return std::nullopt.

Data Model (conceptual)
records = {
  "<username>": {
    "income":  { "<category>": total_amount, ... },
    "expense": { "<category>": total_amount, ... }
  },
  ...
}

Constraints

username, category: non-empty, ≤ 50 chars

amount: non-negative float

Up to 100 users; up to 10 categories per user

Categories accumulate totals across calls

Example (behavior)

add_income("john_doe", "salary", 1000.0) → true

add_expense("john_doe", "food", 200.0) → true

get_balance("john_doe", "salary") → { income: 1000.0, expenses: 0.0, balance: 1000.0 }

get_balance("john_doe", "food") → { income: 0.0, expenses: 200.0, balance: -200.0 }

get_balance("jane", "unknown") → nullopt