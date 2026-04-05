#include "solution.hpp"
#include <algorithm>

bool LibraryManagementSystem::add_book(const std::string& book_id, const std::string& title) {
    if (books_.find(book_id) == books_.end()) {
        books_[book_id] = title;
        borrow_status_[book_id] = false;
        return true;
    }
    return false;
}

std::optional<std::string> LibraryManagementSystem::check_availability(const std::string& book_id) {
    if (books_.count(book_id) && !borrow_status_[book_id]) {
        return books_[book_id];
    }
    return std::nullopt;
}

bool LibraryManagementSystem::borrow_book(const std::string& user_id, const std::string& book_id) {
    if (books_.count(book_id) && !borrow_status_[book_id]) {
        borrow_status_[book_id] = true;
        if (borrow_history_.find(book_id) == borrow_history_.end()) {
            borrow_history_[book_id] = {};
        }
        borrow_history_[book_id].push_back(user_id);
        return true;
    
    }
    return false;
}

bool LibraryManagementSystem::return_book(const std::string& book_id) 
{

    if (books_.count(book_id) && borrow_status_[book_id] == true) 
    {
        borrow_status_[book_id] = false;
        
        if(!reservations_[book_id].empty())
        {
            auto next_user = reservations_[book_id].front();
            reservations_[book_id].pop_front();
            borrow_book(next_user, book_id);
        }
        
        return true;
    }
    return false;
}

std::vector<std::string> LibraryManagementSystem::get_borrow_history(const std::string& book_id) {
    return borrow_history_[book_id];
}

bool LibraryManagementSystem::reserve_book(const std::string& user_id, const std::string& book_id) 
{
     if (books_.count(book_id))  
     {
        auto it = std::find(reservations_[book_id].begin(), reservations_[book_id].end(), user_id);
        if(it == reservations_[book_id].end())
        {
            reservations_[book_id].push_back(user_id);
            return true;
        }
        
     }
    
    return false;
}

std::optional<std::string> LibraryManagementSystem::notify_availability(const std::string& book_id) 
{
    if(!reservations_[book_id].empty())
    {
       return  reservations_[book_id].front();
    }
    // TODO: Notify the next user in queue that the book is available if it was reserved.
    return std::nullopt;
}

std::optional<std::string> LibraryManagementSystem::check_reservation(const std::string& book_id) 
{
    if(!reservations_[book_id].empty())
    {
       return  reservations_[book_id].front();
    }
    return std::nullopt;
}