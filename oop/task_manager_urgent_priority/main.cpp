#include "solution.hpp"

TaskManager::TaskManager() : tasks() {}

void TaskManager::addTask(const std::string& taskName, int priority, bool urgent) 
{
    if (tasks.size() >= 100) 
    {
        std::cout << "Error: Maximum task limit reached." << std::endl;
        return;
    }
     if (priority < 1 || priority > 5) 
    {
        std::cout << "Error: Priority must be between 1 and 5." << std::endl;
        return;
    }
    if (taskName.length() > 50) 
    {
        std::cout << "Error: Task name exceeds 50 characters." << std::endl;
        return;
    }
    Task newTask = {taskName, priority, urgent};
    if (urgent) 
    {
        tasks.insert(tasks.begin(), newTask);
    } else 
    {
        auto it = tasks.begin();
        while (it != tasks.end() && it->priority >= priority) 
        {
            ++it;
        }
        tasks.insert(it, newTask);
    }  
}

void TaskManager::addTask(const std::string& taskName, int priority)
{
    addTask(taskName, priority, false);
}

std::vector<Task> TaskManager::getTasks() const {
    return tasks;
}

int main() {
    TaskManager tm;
    tm.addTask("Task 1", 3);
    tm.addTask("Task 2", 1);
    tm.addTask("Task 3", 5);
    tm.addTask("Task 4", 2, true);
    tm.addTask("Task 5", 4, true);
    tm.addTask("Task 6", 5);
    
    for (const auto& task : tm.getTasks()) {
        std::cout << "Task: " << task.name 
                  << ", Priority: " << task.priority 
                  << ", Urgent: " << (task.urgent ? "Yes" : "No") << std::endl;
    }
    return 0;
}