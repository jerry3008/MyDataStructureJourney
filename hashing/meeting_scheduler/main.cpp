#include "solution.hpp"
#include <algorithm>
#include <numeric>

bool MeetingScheduler::add_meeting(const std::string &meeting_id, const std::string &title, const std::string &date, const std::vector<std::string> &attendees) 
{
    if(meetings.count(meeting_id)) 
    {
        return false;
    }
    meetings[meeting_id] = {title, date,  attendees};
    return true;
    // TODO: Add a new meeting with the specified attributes. 
    // Return true if added successfully, false if meeting_id already exists.
    
}

std::optional<Meeting> MeetingScheduler::get_meeting(const std::string &meeting_id) 
{
    if(meetings.count(meeting_id))
    {
        return meetings[meeting_id];
    }
    return std::nullopt;
    // TODO: Return the meeting details if the meeting_id exists; otherwise return std::nullopt.
    
}

bool MeetingScheduler::update_meeting_date(const std::string &meeting_id, const std::string &new_date) 
{
    if(meetings.count(meeting_id))
    {
        meetings[meeting_id].date =  new_date;
        return true; 
    }
    return false;
    // TODO: Update the meeting date if the meeting_id exists. 
    // Return true if updated, false otherwise.
    
}

std::vector<std::string> MeetingScheduler::filter_meetings(const std::optional<std::string> &start_date, const std::optional<std::string> &end_date, const std::optional<std::string> &attendee) 
{
    std::vector<std::string> result;
    for(const auto&[meeting_names, meeting_details]: meetings)
    {
        if(start_date && meeting_details.date < *start_date  )continue;
        if(end_date && meeting_details.date > *end_date)continue;
        if(attendee && std::find(meeting_details.attendees.begin(), meeting_details.attendees.end(), *attendee) == meeting_details.attendees.end())continue;
        result.push_back(meeting_names);
        
    }
    return result;
    // TODO: Return a list of meeting IDs that match the specified criteria. 
    // Ignore criteria if they are std::nullopt.
}

std::map<std::string, int> MeetingScheduler::meeting_stats() 
{
    long long  total_meetings = meetings.size();
    long long total_attendees = std::accumulate(meetings.begin(), meetings.end(), 0LL, [](long long sum, const auto& pair)
    {
        return sum + pair.second.attendees.size();
    });
    double average = static_cast<double>(total_attendees)/ total_meetings;
    int average_attendees= static_cast<int>(std::round(average));
    if(total_meetings == 0)
    {
        return 
        {
        {"total_meetings", 0},
        {"total_attendees", 0},
        {"average_attendees", 0}
        };
    }
    return 
    {
            {"total_meetings", static_cast<int>(total_meetings)},
            {"total_attendees", static_cast<int>(total_attendees)},
            {"average_attendees", average_attendees}
    };
    
}