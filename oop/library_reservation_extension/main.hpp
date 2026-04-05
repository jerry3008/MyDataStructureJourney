#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <unordered_map>
#include <string>
#include <vector>
#include <deque>
#include <optional>
#include <algorithm>

class LibraryManagementSystem {
public:
    bool add_book(const std::string& book_id, const std::string& title);
    std::optional<std::string> check_availability(const std::string& book_id);
    bool borrow_book(const std::string& user_id, const std::string& book_id);
    bool return_book(const std::string& book_id);
    std::vector<std::string> get_borrow_history(const std::string& book_id);
    bool reserve_book(const std::string& user_id, const std::string& book_id);
    std::optional<std::string> notify_availability(const std::string& book_id);
    std::optional<std::string> check_reservation(const std::string& book_id);

private:
    std::unordered_map<std::string, std::string> books_;
    std::unordered_map<std::string, bool> borrow_status_;
    std::unordered_map<std::string, std::vector<std::string>> borrow_history_;
    std::unordered_map<std::string, std::deque<std::string>> reservations_;
};

#endif  // SOLUTION_HPP_