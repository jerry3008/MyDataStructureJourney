#include <string>
#include <ostream>
#include <map>
#include <iostream>
#include <optional>

class Task {
public:
    std::string title;
    std::string due_date;

    Task(std::string title, std::string due_date);
    bool operator<(const Task& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Task& task);
};

class TaskScheduler {
private:
    std::map<Task, std::string> tasks;
public:
    TaskScheduler();

    void schedule_task(const Task& task);
    std::optional<Task> get_next_task() const;
};

#endif