# Advanced User Management System (C++)

This project defines an enhanced **User Management System** capable of storing user details, updating records, deleting users, filtering data dynamically, and exporting selected user information. The system supports flexible querying across any user field.

---

## Overview

Each user is identified by a unique `user_id` and contains:
- `username` (string)
- `email` (string)
- `role` (string)

User records are stored in a data structure that allows fast lookup and modification.

---

## Methods to Implement

### 1. `void add_user(const std::string& user_id, const std::string& username, const std::string& email, const std::string& role)`
Adds a user to the system.  
If the user already exists, their `username`, `email`, and `role` are updated.

#### Example
```cpp
add_user("U1", "alice", "alice@example.com", "admin");
add_user("U1", "alice_w", "alice_w@example.com", "admin");  
// Updates existing record
2. std::optional<std::map<std::string, std::string>> get_user(const std::string& user_id)
Retrieves a user's details as a map:

"user_id"

"username"

"email"

"role"

Returns std::nullopt if the user does not exist.

Example
cpp
Copy code
get_user("U1");
// → { {"user_id", "U1"}, {"username", "alice"}, {"email", "alice@example.com"}, {"role", "admin"} }
3. bool delete_user(const std::string& user_id)
Deletes the user with the given ID.
Returns:

true if the user was removed

false if the user did not exist

4. int aggregate_users(const std::string& field, const std::string& value)
Counts how many users have a given field equal to a specific value.

Valid fields include:

"username"

"email"

"role"

This allows dynamic filtering and flexible queries.

Example
cpp
Copy code
aggregate_users("role", "admin");  
// Returns how many users have role = "admin"
5. std::vector<std::map<std::string, std::string>> filter_users(const std::string& field, const std::string& value)
Returns a list of all user records where the specified field matches the given value.

The full record for each user should be returned.

Example
cpp
Copy code
filter_users("role", "viewer");
// → list of all users with role = "viewer"
Example Workflow
cpp
Copy code
UserManager manager;

manager.add_user("U1", "alice", "alice@example.com", "admin");
manager.add_user("U2", "bob", "bob@example.com", "viewer");
manager.add_user("U3", "carol", "carol@example.com", "viewer");

auto bob = manager.get_user("U2");

int viewer_count = manager.aggregate_users("role", "viewer");
// → 2

auto viewer_users = manager.filter_users("role", "viewer");
// → [{U2 record}, {U3 record}]

manager.delete_user("U1");
Expected Behavior
Operation	Result
Add User	Creates or updates the user record
Get User	Returns user map or nullopt
Delete User	Removes record if found
Aggregate Users	Returns count of users matching a field=value condition
Filter Users	Returns full records matching the condition

Complexity
Operation	Complexity
add_user	O(1) average
get_user	O(1) average
delete_user	O(1) average
aggregate_users	O(n)
filter_users	O(n)

Build and Run
bash
Copy code
g++ -std=c++17 hashing/user_management_advanced/main.cpp -o user_management_advanced
./user_management_advanced
Notes
Use std::unordered_map<std::string, User> for fast access.

Filtering and aggregation must support any valid field name.

Operations should be non-destructive and should not modify unrelated records.