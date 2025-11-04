# Library Inventory Statistics (C++ • Hashing)

Welcome, Explorer!  
This project extends a basic **library management system** that stores information about books and supports generating inventory statistics.

---

## Overview
Each book in the inventory is uniquely identified by a `book_id` (`std::string`) and contains:
- **title** (`std::string`)
- **author** (`std::string`)

The base class already supports:
- Adding or updating books.
- Retrieving book details.
- Removing books.

Your task: **Implement a statistics feature** that summarizes the current state of the library inventory.

---

## Existing Methods

### ✅ `bool add_book(const std::string& book_id, const std::string& title, const std::string& author)`
- Adds or updates a book using the given `book_id`, `title`, and `author`.
- Always returns `true`.

### ✅ `std::optional<std::unordered_map<std::string, std::string>> get_book(const std::string& book_id)`
- Returns a map containing `"title"` and `"author"` of the specified book.
- Returns `std::nullopt` if the book does not exist.

### ✅ `bool remove_book(const std::string& book_id)`
- Removes a book by its `book_id`.
- Returns `true` if successfully removed; `false` otherwise.

---

## 🧠 Task — Implement `inventory_statistics()`

Create a method that returns an `InventoryStatistics` struct summarizing:
1. **`total_books`** → total number of books currently in the inventory  
2. **`unique_authors`** → count of distinct authors  
3. **`titles`** → alphabetically sorted list of all book titles

### Struct Definition
```cpp
struct InventoryStatistics {
    int total_books;
    int unique_authors;
    std::vector<std::string> titles;
};

If the inventory is empty, the method should return:

{
  "total_books": 0,
  "unique_authors": 0,
  "titles": []
}
Expected Behavior
Action	Result
Add books	Increases total_books, adds authors, and updates titles.
Remove books	Decreases total_books, updates author count if needed.
No books in inventory	Returns all zero counts and empty titles list.
Complexity

Building statistics: O(n log n) due to sorting titles.

All other operations: O(1) average for add, get, and remove using hashing.

Build & Run

Add your implementation in main.cpp.

Compile with:

g++ -std=c++17 hashing/library_inventory_statistics/main.cpp -o library_stats
./library_stats


Test with various add/remove scenarios to verify correctness.

Notes

Use std::unordered_map for storing book records.

Use std::set or sorting on a vector to get alphabetical titles.

Keep the method non-destructive (it should not modify the inventory).
