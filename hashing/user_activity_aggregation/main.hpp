#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <unordered_map>
#include <optional>
#include <utility>

struct ActivityStatistics {
    int total_activities;
    std::unordered_map<std::string, int> activity_types;
    std::pair<std::string, std::string> timespan;
};

struct TimespanStatistics {
    int total_activities;
    float average_activities_per_day;
};

class ActivityTracker {
public:
    bool log_activity(const std::string& user_id, const std::string& activity_id, const std::string& activity_type, const std::string& timestamp, const std::string& details);

    std::optional<std::unordered_map<std::string, std::string>> get_activity(const std::string& user_id, const std::string& activity_id);

    bool delete_activity(const std::string& user_id, const std::string& activity_id);

    std::optional<ActivityStatistics> aggregate_statistics(const std::string& user_id);

    std::optional<TimespanStatistics> get_activities_in_timespan(const std::string& user_id, const std::string& start_date, const std::string& end_date);

private:
    std::unordered_map<std::string, std::unordered_map<std::string, std::unordered_map<std::string, std::string>>> activities;
};

#endif  // SOLUTION_HPP_