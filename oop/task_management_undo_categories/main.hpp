#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
#include <optional>
#include <algorithm>

struct Task {
    std::string description;
    std::optional<int> priority;
    std::optional<std::string> category;
};

struct OperationDetail {
    std::optional<std::string> description;
    Task task;
    std::optional<int> priority;
    std::optional<std::string> category;
};

struct Operation {
    std::string operation;
    std::string task_id;
    OperationDetail detail;
};

class TaskManagementSystem {
public:
    bool add_task(const std::string& task_id, const std::string& description);
    bool edit_task(const std::string& task_id, const std::string& new_description);
    bool remove_task(const std::string& task_id);
    bool set_task_priority(const std::string& task_id, int priority);
    bool categorize_task(const std::string& task_id, const std::string& category);
    std::vector<std::string> get_tasks_by_priority(int min_priority) const;
    std::vector<std::string> get_tasks_by_category(const std::string& category) const;
    bool undo_last_operation();
    bool change_task_category(const std::string& task_id, const std::string& new_category);

private:
    std::unordered_map<std::string, Task> tasks_;
    std::stack<Operation> operation_history_;
};
#endif  // SOLUTION_HPP_