# Order Management Aggregation (C++ • Hashing)

Welcome, Explorer!  
This project extends a simplified **order management system** to include aggregated statistics for each order.

---

## Overview
Each order in the system is identified by a unique `order_id` (`std::string`).  
An order contains multiple **items**, each identified by:
- **item_id** (`std::string`)
- **quantity** (`int`)
- **price** (`float`)

The base system already supports adding, retrieving, and deleting items.

Your task: **Implement aggregation functionality** to compute summaries for an order.

---

## Existing Methods

### ✅ `bool add_item(const std::string& order_id, const std::string& item_id, int quantity, float price)`
- Adds or updates an item within an order.
- Returns `true` if successfully added or updated, `false` otherwise.

### ✅ `std::optional<Item> get_item(const std::string& order_id, const std::string& item_id)`
- Retrieves an item’s details (`quantity`, `price`) under the specified order.
- Returns `std::nullopt` if the item or order doesn’t exist.

### ✅ `bool delete_item(const std::string& order_id, const std::string& item_id)`
- Deletes an item from an order.
- Returns `true` if deletion succeeded; `false` otherwise.

---

## 🧠 Task — Implement `aggregate_order(const std::string& order_id)`

You must create an **aggregation method** that summarizes all items under a given order.

### Function Signature
```cpp
std::optional<OrderAggregate> aggregate_order(const std::string& order_id);
Struct Definition
struct OrderAggregate {
    int total_quantity;
    float total_price;
    std::vector<Item> items;
};

Expected Behavior

Calculate:

total_quantity → sum of all item quantities

total_price → sum of all (quantity × price)

Include only items with a price greater than zero in the items list.

Return std::nullopt if the order does not exist.

If no items exist, items should be an empty vector.

Example Output
{
  "total_quantity": 8,
  "total_price": 550.0,
  "items": [
    { "item_id": "item1", "quantity": 3, "price": 100.0 },
    { "item_id": "item2", "quantity": 5, "price": 50.0 }
  ]
}


If the order does not exist:

null


If there are no items:

{
  "total_quantity": 0,
  "total_price": 0.0,
  "items": []
}

Complexity

Aggregation runs in O(n) time where n = number of items in the order.

Uses std::unordered_map for average O(1) lookups per item.

Build & Run

Add your implementation in main.cpp.

Compile using:

g++ -std=c++17 hashing/order_management_aggregate/main.cpp -o order_aggregate
./order_aggregate

Notes

Keep the aggregation non-destructive (read-only summary).

Exclude any items with price == 0.

If necessary, define a helper struct Item { std::string item_id; int quantity; float price; };