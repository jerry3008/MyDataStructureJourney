#include "solution.hpp"
#include <algorithm>
#include <vector>
#include <ctime>
#include <sstream>
#include <iomanip>

bool ActivityTracker::log_activity(const std::string& user_id, const std::string& activity_id, const std::string& activity_type, const std::string& timestamp, const std::string& details) {
    activities[user_id][activity_id] = {
        {"type", activity_type},
        {"timestamp", timestamp},
        {"details", details}
    };
    return true;
}

std::optional<std::unordered_map<std::string, std::string>> ActivityTracker::get_activity(const std::string& user_id, const std::string& activity_id) {
    if (activities.find(user_id) != activities.end() && activities[user_id].find(activity_id) != activities[user_id].end()) {
        return activities.at(user_id).at(activity_id);
    }
    return std::nullopt;
}

bool ActivityTracker::delete_activity(const std::string& user_id, const std::string& activity_id) {
    if (activities.find(user_id) != activities.end() && activities[user_id].find(activity_id) != activities[user_id].end()) {
        activities[user_id].erase(activity_id);
        if (activities[user_id].empty()) {
            activities.erase(user_id);
        }
        return true;
    }
    return false;
}

std::optional<ActivityStatistics> ActivityTracker::aggregate_statistics(const std::string& user_id) 
{
    ActivityStatistics stats{};
    if(activities.count(user_id))
    {
        std::vector<std::string>timestamps;
        for(const auto & [activity_id, activity_info]: activities[user_id])
        {
            stats.total_activities += 1;
            stats.activity_types[activity_info.at("type")] += 1;
            timestamps.push_back(activity_info.at("timestamp"));
        }
        if(!timestamps.empty())
        {
            std::sort(timestamps.begin(), timestamps.end());
            stats.timespan = {timestamps.front(), timestamps.back()};
        }
        return stats;
    }
    // TODO: Implement this function 
    return std::nullopt;
}

std::optional<TimespanStatistics> ActivityTracker::get_activities_in_timespan(const std::string& user_id, const std::string& start_date, const std::string& end_date) 
{
    int total_activities = 0;
    if (activities.count(user_id)) {
        std::tm tm_start = {};
        std::tm tm_end = {};
        std::istringstream ss_start(start_date);
        std::istringstream ss_end(end_date);
        ss_start >> std::get_time(&tm_start, "%Y-%m-%dT%H:%M:%S");
        ss_end >> std::get_time(&tm_end, "%Y-%m-%dT%H:%M:%S");
        time_t t_start = std::mktime(&tm_start);
        time_t t_end = std::mktime(&tm_end);
        int number_of_days = (t_end - t_start) / (60*60*24) + 1;

        for (const auto& [activity_id, activity_info] : activities[user_id]) {
            const std::string& ts = activity_info.at("timestamp");
            if (ts >= start_date && ts <= end_date) 
            {
                total_activities += 1;
            }
        }
        if (total_activities == 0) return std::nullopt;

        TimespanStatistics stats;
        stats.total_activities = total_activities;
        stats.average_activities_per_day = static_cast<float>(total_activities) / number_of_days;
        return stats;
    }
    return std::nullopt;
}