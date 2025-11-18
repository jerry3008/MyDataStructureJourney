#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <vector>
#include <map>
#include <optional>
#include <numeric>
#include <cmath>

struct Meeting {
    std::string title;
    std::string date;
    std::vector<std::string> attendees;
};

class MeetingScheduler {
public:
    bool add_meeting(const std::string &meeting_id, const std::string &title, const std::string &date, const std::vector<std::string> &attendees);

    std::optional<Meeting> get_meeting(const std::string &meeting_id);

    bool update_meeting_date(const std::string &meeting_id, const std::string &new_date);

    std::vector<std::string> filter_meetings(const std::optional<std::string> &start_date, const std::optional<std::string> &end_date, const std::optional<std::string> &attendee);

    std::map<std::string, int> meeting_stats();

private:
    std::map<std::string, Meeting> meetings;
};

#endif  // SOLUTION_HPP_