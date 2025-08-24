# Inventory Manager with `std::unordered_set`

## Task
Implement a class that manages a store's inventory using `std::unordered_set<std::string>`, supporting:
- `addProduct(name)`
- `removeProduct(name)`
- `hasProduct(name) -> bool`
- (optional) `size()`, `empty()`

Include a `main()` demonstrating: adding items, checking availability, removing an item, and printing size/empty.

## Rationale
`std::unordered_set` offers average O(1) insert/erase/lookup — ideal for quick availability checks in inventory systems.

## Build & Run
```bash
g++ -std=c++17 -O2 -Wall -Wextra main.cpp -o run
./run
