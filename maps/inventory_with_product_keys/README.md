# Inventory with Product Keys (std::map + custom `<`)

## Goal
Build a small inventory system using `std::map<Product, int>` where `Product` is keyed and sorted by `id` via a custom `operator<`.

## Requirements
- **Product class**: fields `int id`, `std::string name`; overload `operator<` to sort by `id`.
- **Inventory**: `std::map<Product, int>` where value is stock quantity.
- **Search**: `findProductById(inventory, id)` to find the first product with `id >= searchId` (lower_bound behavior) and report its name & quantity; otherwise indicate not found.
- **Demo**: Populate several products, then perform a search without removing from the map.

## Notes
- Sorting is determined solely by `Product::operator<` (compare `id`).
- Efficient search uses map ordering (logarithmic time).






Inventory Management — Product Keys in std::map
Task

Implement an inventory system where:

Each Product has id (int) and name (std::string).

Overload operator< on Product to sort by id.

Use std::map<Product, int> as inventory (value = stock quantity).

Implement findProductById(inventory, id):

Use map ordering to find the first product with id >= searchId (i.e., lower_bound logic).

Return product name and quantity if found, else “not found”.

Demonstrate searching without removing from the map.

Constraints

Up to ~100 products is fine.

id is an integer; name is a non-empty string.

Suggested Structure

Product class with id, name, and operator< (compare id).

std::map<Product, int> inventory;

findProductById(const std::map<Product,int>&, int) → prints/returns found info.

main() populates products and shows search.

Example (concept)

Inventory (sorted by id via operator<):

{ id=101, "Mouse" } -> 25

{ id=205, "Keyboard" } -> 12

{ id=310, "Monitor" } -> 7

Search id=200 → finds first with id >= 200 → {205, "Keyboard"}: qty 12