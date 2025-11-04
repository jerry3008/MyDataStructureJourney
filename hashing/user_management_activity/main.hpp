#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <unordered_map>
#include <optional>
#include <vector>
#include <algorithm>

struct UserActivityInfo {
    std::string user_id;
    std::string name;
    int activity_count;
};

class UserManager {
public:
    bool add_user(const std::string& user_id, const std::string& name);

    std::optional<std::unordered_map<std::string, std::string>> get_user(const std::string& user_id);

    bool delete_user(const std::string& user_id);

    bool add_activity(const std::string& user_id, const std::string& activity);

    std::optional<std::vector<std::string>> get_activities(const std::string& user_id);

    std::vector<UserActivityInfo> top_n_users_by_activities(int n);

private:
    std::unordered_map<std::string, std::unordered_map<std::string, std::string>> users;
    std::unordered_map<std::string, std::vector<std::string>> activities;
};

#endif  // SOLUTION_HPP_