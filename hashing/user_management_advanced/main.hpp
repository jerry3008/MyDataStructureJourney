#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <map>
#include <optional>
#include <vector>

class UserManagementSystem {
public:
    void add_user(const std::string& user_id, const std::string& username, const std::string& email, const std::string& role);

    std::optional<std::map<std::string, std::string>> get_user(const std::string& user_id);

    bool delete_user(const std::string& user_id);

    int aggregate_users(const std::string& field, const std::string& value);

    std::vector<std::map<std::string, std::string>> filter_users(const std::string& field, const std::string& value);

private:
    std::map<std::string, std::map<std::string, std::string>> users;
};
#endif  // SOLUTION_HPP_