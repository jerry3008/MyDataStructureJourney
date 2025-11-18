# MeetingScheduler System (C++ • Hashing)

This project defines a **Meeting Scheduler** system for managing and analyzing meetings.  
Each meeting includes details such as its title, date, and attendees, and is identified by a unique `meeting_id`.

---

## Overview

Each meeting is represented as a struct:

```cpp
struct Meeting {
    std::string title;
    std::string date;
    std::vector<std::string> attendees;
};
The MeetingScheduler class manages a collection of meetings and supports operations to add, retrieve, update, filter, and summarize meeting information.

Methods to Implement
1. bool add_meeting(const std::string& meeting_id, const std::string& title, const std::string& date, const std::vector<std::string>& attendees)
Adds a new meeting with the specified attributes.

Returns true if added successfully, false if a meeting with the same ID already exists.

Example
cpp
Copy code
add_meeting("M101", "Project Kickoff", "2025-05-10", {"Alice", "Bob", "Carol"});  // true
add_meeting("M101", "Duplicate", "2025-06-01", {"Dave"});  // false
2. std::optional<Meeting> get_meeting(const std::string& meeting_id)
Returns the meeting’s details if it exists.

Returns std::nullopt if not found.

Example
cpp
Copy code
get_meeting("M101");
// → { "title": "Project Kickoff", "date": "2025-05-10", "attendees": ["Alice", "Bob", "Carol"] }
3. bool update_meeting_date(const std::string& meeting_id, const std::string& new_date)
Updates the meeting date.

Returns true if updated, false if the meeting does not exist.

Example
cpp
Copy code
update_meeting_date("M101", "2025-05-12");  // true
update_meeting_date("M999", "2025-05-20");  // false
Extended Functionalities
4. std::vector<std::string> filter_meetings(const std::optional<std::string>& start_date, const std::optional<std::string>& end_date, const std::optional<std::string>& attendee)
Returns meeting IDs matching the specified filters:

start_date and end_date define an inclusive date range.

attendee filters meetings that include the given participant.

Criteria that are std::nullopt are ignored.

Example
cpp
Copy code
filter_meetings("2025-05-01", "2025-05-31", "Alice");
// Returns IDs of meetings in May 2025 attended by Alice
5. std::map<std::string, int> meeting_stats()
Returns high-level meeting statistics in a map:

Key	Description
"total_meetings"	Total number of meetings in the system
"total_attendees"	Sum of all attendees across meetings
"average_attendees"	Average number of attendees per meeting (rounded to nearest integer)

Example Output
json
Copy code
{
  "total_meetings": 3,
  "total_attendees": 10,
  "average_attendees": 3
}
Example Workflow
cpp
Copy code
MeetingScheduler scheduler;

scheduler.add_meeting("M101", "Kickoff", "2025-05-10", {"Alice", "Bob", "Carol"});
scheduler.add_meeting("M102", "Design Review", "2025-05-20", {"Alice", "Eve"});
scheduler.add_meeting("M103", "Sprint Planning", "2025-05-25", {"Bob", "Carol", "Dan"});

auto meeting = scheduler.get_meeting("M101");
// → { title: "Kickoff", date: "2025-05-10", attendees: ["Alice", "Bob", "Carol"] }

scheduler.update_meeting_date("M102", "2025-05-21");

auto filtered = scheduler.filter_meetings("2025-05-01", "2025-05-31", "Alice");
// → ["M101", "M102"]

auto stats = scheduler.meeting_stats();
// → { "total_meetings": 3, "total_attendees": 8, "average_attendees": 3 }
Complexity
Operation	Complexity
add_meeting	O(1) average
get_meeting	O(1) average
update_meeting_date	O(1) average
filter_meetings	O(n * a) (n = number of meetings, a = avg attendees per meeting)
meeting_stats	O(n * a)

Build and Run
g++ -std=c++17 hashing/meeting_scheduler/main.cpp -o meeting_scheduler
./meeting_scheduler
Notes

Use std::unordered_map<std::string, Meeting> for storage.

Use lexicographical comparison for filtering dates (YYYY-MM-DD format).

For average rounding, use std::round.

All filtering and stats functions should be non-destructive.