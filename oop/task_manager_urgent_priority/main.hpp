#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <vector>
#include <string>
#include <iostream>

struct Task {
    std::string name;
    int priority;
};

class TaskManager {
public:
    TaskManager();
    void addTask(const std::string& taskName, int priority);
    void addTask(const std::string& taskName, int priority, bool urgent);
    std::vector<Task> getTasks() const;

private:
    std::vector<Task> tasks;
};

#endif  // SOLUTION_HPP_