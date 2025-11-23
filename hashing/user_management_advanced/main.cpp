#include "solution.hpp"
#include <vector>

void UserManagementSystem::add_user(const std::string& user_id, const std::string& username, const std::string& email, const std::string& role) {
    // TODO: Implement adding or updating a user with the given user_id, username, email, and role
    users[user_id] = {{"username", username}, {"email", email}, {"role", role}};
}

std::optional<std::map<std::string, std::string>> UserManagementSystem::get_user(const std::string& user_id) 
{
    
    // TODO: Implement retrieving a user record by user_id, returning nullopt if not found
    auto it = users.find(user_id);
    if(it != users.end())
    {
        return it -> second;
    }
    return std::nullopt;
}

bool UserManagementSystem::delete_user(const std::string& user_id) 
{
    // TODO: Implement deleting a user by user_id, returning true if successful
    return users.erase(user_id)> 0;
   
}

int UserManagementSystem::aggregate_users(const std::string& field, const std::string& value) 
{
    int count = 0;
    for(const auto& [id,  fig]: users)
    {
        if(fig.at(field) == value)
        {
            count++;
        }
    }
    return count;
    
    // TODO: Implement counting users that match a given field and value
}

std::vector<std::map<std::string, std::string>> UserManagementSystem::filter_users(const std::string& field, const std::string& value) {
    // TODO: Implement filtering users based on a field and value
    std::vector<std::map<std::string, std::string>> result;
    for(const auto& [id, fig]: users)
    {
        if(fig.at(field) == value)
        {
            result.push_back(fig);
        }
    }
    return result;
}