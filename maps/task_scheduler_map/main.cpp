#include "main.hpp"

Task::Task(std::string title, std::string due_date)
    : title(title), due_date(due_date) {}
    
std::ostream& operator<<(std::ostream& os, const Task& task) {
    // Overloaded stream insertion operator for the Task class; allows for pretty printing of a Task
    os << "Task(title='" << task.title << "', due_date=" << task.due_date << ")";
    return os;
}

bool Task::operator<(const Task& other) const 
{
    
    return (due_date < other.due_date)|| (due_date == other.due_date  && title < other.title);
    // TODO: Overload operator< for Task class to compare based on due_date
}

TaskScheduler::TaskScheduler() {}

void TaskScheduler::schedule_task(const Task& task) 
{
    tasks[task] = task.title;
    // TODO: Implement method to schedule tasks, storing them in a sorted manner based on due dates
}

std::optional<Task> TaskScheduler::get_next_task() const 
{
    if(tasks.empty()) return std::nullopt;
    auto it = tasks.begin();
    return it->first; 
    // TODO: Implement method to retrieve the next task based on the earliest due date. Return std::nullopt if no task is available.
    
}

int main() {
    TaskScheduler scheduler;
    scheduler.schedule_task(Task("Write Report", "2023-04-15"));
    scheduler.schedule_task(Task("Pay Bills", "2023-04-10"));
    auto result = scheduler.get_next_task();
    
    // TODO: Add tasks using scheduler. Remember to create Task instances with a title and due date

    std::optional<Task> next_task = scheduler.get_next_task();
   if (next_task) 
    {
        std::cout << *next_task << std::endl;
    } else 
    {
        std::cout << "No tasks available" << std::endl;
    }

    return 0;
}