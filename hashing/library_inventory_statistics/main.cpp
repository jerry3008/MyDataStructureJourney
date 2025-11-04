#include "solution.hpp"
#include <vector>
#include <algorithm>
#include <unordered_set>

bool LibraryManager::add_book(const std::string& book_id, const std::string& title, const std::string& author) {
    inventory[book_id] = { {"title", title}, {"author", author} };
    return true;
}

std::optional<std::unordered_map<std::string, std::string>> LibraryManager::get_book(const std::string& book_id) {
    if (inventory.find(book_id) != inventory.end()) {
        return inventory[book_id];
    } 
    return std::nullopt;
}

bool LibraryManager::remove_book(const std::string& book_id) {
    if (inventory.erase(book_id)) {
        return true;
    }
    return false;
}

InventoryStatistics LibraryManager::inventory_statistics() 
{
    std::vector<std::string>titles;
    std::unordered_set<std::string>authors;
    for(const auto& [_, Booksid]: inventory)
    {
        titles.push_back(Booksid.at("title"));
        authors.insert(Booksid.at("author"));
    }
    InventoryStatistics stats;
    stats.total_books = inventory.size();
    stats.unique_authors = authors.size();
    std::sort(titles.begin(), titles.end());
    stats.titles = titles;
    return stats;
    // TODO: This method should return an `InventoryStatistics` struct containing the total number of books in the inventory, the number of unique authors, and a list of book titles. 
    // Book titles in the list should be ordered in alphabetical order.
}