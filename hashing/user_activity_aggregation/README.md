# User Activity Aggregation System (C++ • Hashing)

Welcome, Explorer!  
This project builds upon a **user activity tracking system** to introduce **activity aggregation and timespan analytics**.  
Each user can have multiple logged activities, and the system can now compute insights such as total activities, type distribution, and activity timespan.

---

## 🧩 Overview
Each user has:
- **user_id** (`std::string`)
- A set of activities, each identified by:
  - **activity_id** (`std::string`)
  - **activity_type** (`std::string`)
  - **timestamp** (`std::string`, format: `YYYY-MM-DDTHH:MM:SS`)
  - **details** (`std::string`)

The base implementation includes basic CRUD operations for activities.  
Your task adds *aggregation and analytics* capabilities.

---

## ✅ Existing Methods

### `bool log_activity(const std::string& user_id, const std::string& activity_id, const std::string& activity_type, const std::string& timestamp, const std::string& details)`
- Adds or updates an activity for the given user.
- Always returns `true`.

### `std::optional<std::unordered_map<std::string, std::string>> get_activity(const std::string& user_id, const std::string& activity_id)`
- Retrieves a specific activity’s details.
- Returns `std::nullopt` if the user or activity doesn’t exist.

### `bool delete_activity(const std::string& user_id, const std::string& activity_id)`
- Deletes the specified activity under the given user.
- Returns `true` if deleted successfully; `false` otherwise.

---

## 🧠 New Methods to Implement

### 1. `std::optional<ActivityStatistics> aggregate_statistics(const std::string& user_id)`
Computes summary statistics for all of a user’s activities.

#### The result should include:
- **`total_activities`** → total count of activities.
- **`activity_types`** → frequency of each activity type.
- **`timespan`** → array with earliest and latest timestamps.

#### Struct Example
```cpp
struct ActivityStatistics {
    int total_activities;
    std::unordered_map<std::string, int> activity_types;
    std::pair<std::string, std::string> timespan;
};
Example JSON Output
json
Copy code
{
  "total_activities": 5,
  "activity_types": {
    "login": 2,
    "purchase": 1,
    "logout": 2
  },
  "timespan": ["2025-10-01T09:00:00", "2025-10-05T22:00:00"]
}
If the user has no activities, return std::nullopt.

2. std::optional<TimespanStatistics> get_activities_in_timespan(const std::string& user_id, const std::string& start_date, const std::string& end_date)
Computes statistics for a user’s activities within a specified date range.

The result should include:
total_activities → number of activities between start_date and end_date.

average_activities_per_day → total count divided by the number of days in the timespan.

Struct Example
cpp
Copy code
struct TimespanStatistics {
    int total_activities;
    float average_activities_per_day;
};
Example JSON Output
json
Copy code
{
  "total_activities": 3,
  "average_activities_per_day": 1.5
}
If no activities exist in the range, return std::nullopt.

🧮 Complexity
Operation	Complexity
log_activity	O(1) average
get_activity	O(1) average
delete_activity	O(1) average
aggregate_statistics	O(n)
get_activities_in_timespan	O(n)

⚙️ Build & Run
bash
Copy code
g++ -std=c++17 hashing/user_activity_aggregation/main.cpp -o user_activity_agg
./user_activity_agg
📝 Notes
Store each user’s activities in a std::unordered_map<std::string, Activity>.

Parse timestamps as ISO 8601 strings (YYYY-MM-DDTHH:MM:SS) for comparison.

Use lexicographical comparisons for min/max timestamps.

Keep functions non-destructive (read-only summaries).