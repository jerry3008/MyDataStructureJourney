#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <optional>
#include <algorithm>

struct Task {
    std::string title;
    std::string description;
    std::string status;
    int priority;
};

class TaskTrackingSystem {
public:
    bool add_task(const std::string &task_id, const std::string &title, const std::string &description, const std::string &status, int priority);

    bool remove_task(const std::string &task_id);

    bool update_task(const std::string &task_id, const std::optional<std::string> &title, const std::optional<std::string> &description, const std::optional<std::string> &status, const std::optional<int> &priority);

    std::vector<std::string> get_tasks_by_status(const std::string &status) const;

    std::vector<std::string> get_tasks_by_priority(int priority) const;

    bool add_dependency(const std::string &task_id, const std::string &dependency_task_id);

    bool remove_dependency(const std::string &task_id, const std::string &dependency_task_id);

    std::vector<std::string> get_dependent_tasks(const std::string &task_id) const;

private:
    std::unordered_set<std::string> tasks_;
    std::unordered_map<std::string, Task> task_attributes_;
    std::unordered_map<std::string, std::unordered_set<std::string>>dependencies_;
    std::unordered_map<std::string, std::unordered_set<std::string>>dependents_;
};

#endif  // SOLUTION_HPP_