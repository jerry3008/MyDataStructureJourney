#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <unordered_map>
#include <optional>
#include <vector>

struct InventoryStatistics {
    int total_books;
    int unique_authors;
    std::vector<std::string> titles;
};

class LibraryManager {
public:
    bool add_book(const std::string& book_id, const std::string& title, const std::string& author);

    std::optional<std::unordered_map<std::string, std::string>> get_book(const std::string& book_id);

    bool remove_book(const std::string& book_id);

    InventoryStatistics inventory_statistics();

private:
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> inventory;
};

#endif  // SOLUTION_HPP_