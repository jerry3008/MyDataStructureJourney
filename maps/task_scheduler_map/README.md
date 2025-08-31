Task Scheduler (std::map, sorted by due date)
Task

Create a TaskScheduler using C++ and std::map.

Task class

Fields: title, due_date (e.g., "YYYY-MM-DD" as string)

Overload operator< to compare by due_date (earlier date = “smaller”).

TaskScheduler

void schedule_task(const Task& task) — add task; tasks are kept sorted by due date.

std::optional<Task> get_next_task() const — return the earliest-due task, or std::nullopt if none.

Example

Schedule: Task("Write Report", "2023-04-15")

Schedule: Task("Pay Bills", "2023-04-10")

get_next_task() → Task("Pay Bills", "2023-04-10")

Constraints

Dates supplied as "YYYY-MM-DD" strings

At least two scheduled tasks in main for demo flow

# Task Scheduler (std::map)

## Goal
Implement a `TaskScheduler` that stores tasks in ascending due date order using `std::map`.

### Requirements
- `Task` class:
  - `title: std::string`
  - `due_date: std::string` (format "YYYY-MM-DD")
  - Overload `operator<` to compare by `due_date`.

- `TaskScheduler`:
  - `void schedule_task(const Task& task)` — insert task; tasks remain sorted by due date.
  - `std::optional<Task> get_next_task() const` — return earliest-due task or `std::nullopt`.

## Example Usage
- Schedule: `Task("Write Report", "2023-04-15")`
- Schedule: `Task("Pay Bills", "2023-04-10")`
- `get_next_task()` → `Task("Pay Bills", "2023-04-10")`

## Notes
- Treat `due_date` as lexicographically comparable strings in "YYYY-MM-DD".
- Demonstrate at least two tasks and retrieval in `main.cpp`.
