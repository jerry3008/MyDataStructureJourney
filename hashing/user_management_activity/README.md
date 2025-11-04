# User Management System with Activity Tracking (C++ • Hashing)

Welcome, Explorer!  
This project extends a basic **user management system** to support tracking user activities and retrieving aggregated data.

---

## 🧩 Overview

Each user in the system is identified by a **unique user_id** (`std::string`) and stores:
- **name** (`std::string`)
- A list of **activities** (`std::vector<std::string>`)

The starter code already supports adding, retrieving, and deleting users.  
Your task is to implement activity tracking and aggregation features.

---

## ✅ Existing Methods

### `bool add_user(const std::string& user_id, const std::string& name)`
- Adds a new user to the system.
- Returns `true` if successfully added; `false` if user_id already exists.

### `std::optional<std::unordered_map<std::string, std::string>> get_user(const std::string& user_id)`
- Retrieves user details (name) for the specified user_id.
- Returns `std::nullopt` if the user does not exist.

### `bool delete_user(const std::string& user_id)`
- Deletes a user by their user_id.
- Returns `true` if successfully deleted; otherwise, `false`.

---

## 🧠 New Features to Implement

### 1. `bool add_activity(const std::string& user_id, const std::string& activity)`
- Adds a user activity (e.g., `"login"`, `"purchase"`).
- Returns `true` if activity added successfully.  
- Returns `false` if the user does not exist.

---

### 2. `std::optional<std::vector<std::string>> get_activities(const std::string& user_id)`
- Returns the list of all activities for the specified user.
- Returns `std::nullopt` if the user does not exist.

---

### 3. `std::vector<UserActivityInfo> top_n_users_by_activities(int n)`
- Returns the **top `n` users** with the most activities.
- Sort by:
  1. **Descending** activity count.
  2. **Lexicographical order** of `user_id` for ties.
- If there are fewer than `n` users, return all users.

---

### Struct Definition
```cpp
struct UserActivityInfo {
    std::string user_id;
    std::string name;
    int activity_count;
};
⚙️ Example Workflow
user_manager.add_user("u1", "Alice");
user_manager.add_user("u2", "Bob");
user_manager.add_user("u3", "Carol");

user_manager.add_activity("u1", "login");
user_manager.add_activity("u1", "view product");
user_manager.add_activity("u2", "login");

auto activities1 = user_manager.get_activities("u1");  
// → ["login", "view product"]

user_manager.add_activity("u3", "login");
user_manager.add_activity("u3", "purchase");
user_manager.add_activity("u3", "logout");

auto top_users = user_manager.top_n_users_by_activities(2);
// → [{user_id: "u3", name: "Carol", activity_count: 3},
//    {user_id: "u1", name: "Alice", activity_count: 2}]

📊 Expected Behavior
Action	Result
Add a user	Inserts into the system
Add activity	Appends to user's activity list
Get activities	Returns all logged actions
Top N users	Sorts by activity count and ID
🧮 Complexity

add_user, add_activity, get_user, get_activities: O(1) average

top_n_users_by_activities: O(u log u), where u = number of users

🏗️ Build & Run
g++ -std=c++17 hashing/user_management_activity/main.cpp -o user_activity
./user_activity

📝 Notes

Use std::unordered_map<std::string, User> to manage users efficiently.

Each User can internally hold a std::vector<std::string> for activities.

Keep all functions non-destructive (no mutation outside intended scope).