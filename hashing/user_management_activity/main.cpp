#include "solution.hpp"

bool UserManager::add_user(const std::string& user_id, const std::string& name) {
    if (users.count(user_id)) {
        return false;
    }
    users[user_id] = {{"name", name}};
    activities[user_id] = {};
    return true;
}

std::optional<std::unordered_map<std::string, std::string>> UserManager::get_user(const std::string& user_id) {
    if (users.count(user_id)) {
        return users[user_id];
    }
    return std::nullopt;
}

bool UserManager::delete_user(const std::string& user_id) {
    if (users.count(user_id)) {
        users.erase(user_id);
        activities.erase(user_id);
        return true;
    }
    return false;
}

bool UserManager::add_activity(const std::string& user_id, const std::string& activity) 
{
    
    if(activities.count(user_id))
    {
       activities[user_id].push_back(activity); 
       return true;
    }
    // TODO: Adds an `activity` (a string) for the specified `user_id`. 
    // Returns `true` if the activity was successfully added; `false` if the user does not exist.
    return false;
}

std::optional<std::vector<std::string>> UserManager::get_activities(const std::string& user_id) 
{
    if(activities.count(user_id))
    {
        return activities[user_id];
    }
    // TODO: Retrieves the list of activities for the specified `user_id`. 
    // If the user does not exist, returns `std::nullopt`.
    return std::nullopt;
}

std::vector<UserActivityInfo> UserManager::top_n_users_by_activities(int n) 
{
    std::vector<UserActivityInfo> result;
    UserActivityInfo UserActivit {};
    for(const auto & [useri, useract]: activities)
    {
        UserActivityInfo info;
        info.user_id = useri;
        info.name = users[useri]["name"];
        info.activity_count = useract.size();
        result.push_back(info);
        //result.push_back(UserActivityInfo{useri, users[useri]["name"], static_cast<int>(useract.size())});
    }
    std::sort(result.begin(), result.end(), [](const UserActivityInfo& a, const UserActivityInfo& b)
    {
        if(a.activity_count != b.activity_count)
            return a.activity_count > b.activity_count;
        return a.user_id < b.user_id;
        
    });
    if (result.size() > n) 
    {
        result.resize(n);
    }
    // TODO: Returns a list of the top `n` users sorted by the number of activities they have in descending order. 
    // Each element should be an instance of `UserActivityInfo` struct containing `user_id`, `name`, and `activity_count`. 
    // In case of a tie, users must be sorted in lexicographical order of their `user_id`. 
    // If there are fewer than `n` users in the system, return all users.
    return result;
}