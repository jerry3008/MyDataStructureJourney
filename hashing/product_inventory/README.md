# ProductInventory System (C++ • Hashing)

Welcome, Explorer!  
This project defines a **Product Inventory Management System** to manage, filter, and analyze a collection of products.  
Each product is uniquely identified by its `product_id`.

---

## 🧩 Overview

Each product is represented as a `struct`:
```cpp
struct Product {
    std::string product_id;
    std::string name;
    float price;
    int quantity;
};
The ProductInventory class will manage all products and provide methods for adding, retrieving, updating, filtering, and aggregating data.

✅ Methods to Implement
1. bool add_product(const std::string& product_id, const std::string& name, float price, int quantity)
Adds a new product to the inventory.

Returns true if added successfully, false if a product with the same ID already exists.

Example
cpp
Copy code
add_product("P101", "Laptop", 899.99, 15); // true
add_product("P101", "Duplicate Laptop", 799.99, 10); // false
2. std::optional<Product> get_product(const std::string& product_id)
Retrieves a product’s full details.

Returns std::nullopt if the product doesn’t exist.

Example
cpp
Copy code
get_product("P101");
// → Product { "P101", "Laptop", 899.99, 15 }
3. bool update_price(const std::string& product_id, float new_price)
Updates the product’s price.

Returns true if the product exists and was updated; otherwise, false.

Example
cpp
Copy code
update_price("P101", 949.99); // true
update_price("P999", 399.99); // false (product not found)
4. std::vector<std::string> filter_products(std::optional<float> min_price, std::optional<float> max_price, std::optional<int> min_quantity, std::optional<int> max_quantity)
Returns a list of product IDs that match the given filters.

Any filter set to std::nullopt will be ignored.

Example
cpp
Copy code
filter_products(500.0, 1000.0, std::nullopt, 50);
// Returns products priced between $500–$1000 with any quantity up to 50.
5. std::map<std::string, float> inventory_stats()
Returns high-level inventory metrics in a map:

"total_products" → total number of products

"average_price" → average price (rounded to 2 decimals)

"total_quantity" → total number of units across all products

Example Output
json
Copy code
{
  "total_products": 3,
  "average_price": 849.99,
  "total_quantity": 120
}
⚙️ Example Workflow
cpp
Copy code
ProductInventory inv;

inv.add_product("P101", "Laptop", 899.99, 15);
inv.add_product("P102", "Mouse", 25.99, 100);
inv.add_product("P103", "Keyboard", 49.99, 30);

auto p1 = inv.get_product("P101");
// → { product_id: "P101", name: "Laptop", price: 899.99, quantity: 15 }

inv.update_price("P102", 27.50); // Updates mouse price

auto filtered = inv.filter_products(30.0, 900.0, 10, std::nullopt);
// → ["P101", "P103"]

auto stats = inv.inventory_stats();
// → { "total_products": 3, "average_price": 325.83, "total_quantity": 145 }
🧮 Complexity
Operation	Complexity
add_product	O(1) average
get_product	O(1) average
update_price	O(1) average
filter_products	O(n)
inventory_stats	O(n)

🏗️ Build & Run
bash
Copy code
g++ -std=c++17 hashing/product_inventory/main.cpp -o product_inventory
./product_inventory
📝 Notes
Use std::unordered_map<std::string, Product> to store products efficiently.

For average rounding, use std::round(value * 100) / 100.0f.

Ensure all filters are optional and combined logically (AND conditions).

Keep all operations non-destructive — filtering and aggregation should not modify the inventory.