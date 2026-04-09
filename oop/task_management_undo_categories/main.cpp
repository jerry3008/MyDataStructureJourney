#include "solution.hpp"
#include <algorithm>

bool TaskManagementSystem::add_task(const std::string& task_id, const std::string& description) {
    if (tasks_.find(task_id) != tasks_.end()) return false;
    Operation Operation_;
    Operation_.operation = "add";
    Operation_.task_id = task_id; 
    tasks_[task_id] = {description, std::nullopt, std::nullopt};
    operation_history_.push(Operation_);
    return true;
}

bool TaskManagementSystem::edit_task(const std::string& task_id, const std::string& new_description) {
    if(tasks_.find(task_id) == tasks_.end()) return false;
    Operation Operation_;
    Operation_.operation = "edit";
    OperationDetail OperationDetail_;
    OperationDetail_.description = tasks_[task_id].description;
    Operation_.task_id = task_id; 
    Operation_.detail = OperationDetail_;
    tasks_[task_id].description = new_description;
    operation_history_.push(Operation_);
    return true;
}

bool TaskManagementSystem::remove_task(const std::string& task_id) 
{
    if (tasks_.find(task_id) == tasks_.end()) return false;
    Operation Operation_;
    Operation_.operation = "remove";
    OperationDetail OperationDetail_;
    OperationDetail_.task = tasks_[task_id];
    Operation_.task_id = task_id; 
    Operation_.detail = OperationDetail_;
    tasks_.erase(task_id);
    operation_history_.push(Operation_);
    return true;
}

bool TaskManagementSystem::set_task_priority(const std::string& task_id, int priority) {
    if (tasks_.find(task_id) == tasks_.end()) return false;
    Operation Operation_;
    Operation_.operation = "Priority";
    OperationDetail OperationDetail_;
    OperationDetail_.task = tasks_[task_id];
    OperationDetail_.priority =tasks_[task_id].priority;
    Operation_.task_id = task_id; 
    Operation_.detail = OperationDetail_;
    operation_history_.push(Operation_);
    tasks_[task_id].priority = priority;
    return true;
}

std::vector<std::string> TaskManagementSystem::get_tasks_by_priority(int min_priority) const {
    std::vector<std::string> result;
    std::vector<std::pair<std::string, int>> temp;
    for (const auto& [task_id, task] : tasks_) {
        if (task.priority.has_value() && task.priority.value() >= min_priority) {
           temp.push_back({task_id, task.priority.value()});
        }
    }
    std::sort(temp.begin(), temp.end(), [](const auto& a, const auto& b)
    {
        return a.second < b.second;
    });
    for (const auto& p : temp) 
    {
        result.push_back(p.first);
    }
    return result;
}

bool TaskManagementSystem::categorize_task(const std::string& task_id, const std::string& category) 
{
    if (tasks_.find(task_id) == tasks_.end()) return false;
    Operation Operation_;
    Operation_.operation = "category";
    OperationDetail OperationDetail_;
    OperationDetail_.task = tasks_[task_id];
    OperationDetail_.category = tasks_[task_id].category;
    Operation_.task_id = task_id; 
    Operation_.detail = OperationDetail_;
    operation_history_.push(Operation_);
    tasks_[task_id].category = category;
    return true;
}

std::vector<std::string> TaskManagementSystem::get_tasks_by_category(const std::string& category) const {
    std::vector<std::string> result;
    for (const auto& [task_id, task] : tasks_) {
        if (task.category.value_or("") == category) {
            result.push_back(task_id);
        }
    }
    return result;
}

bool TaskManagementSystem::undo_last_operation() 
{
    if (operation_history_.empty()) return false;
    auto result = operation_history_.top();
    operation_history_.pop();
    if (result.operation == "add") 
    {
        tasks_.erase(result.task_id);
    }else if (result.operation == "remove") 
    {
        tasks_[result.task_id] = result.detail.task;
    }else if (result.operation == "edit") 
    {
        tasks_[result.task_id].description = *result.detail.description;
    }
    else if (result.operation == "Priority") 
    {
        tasks_[result.task_id].priority = result.detail.priority;
    }
    else if (result.operation == "category") 
    {
        tasks_[result.task_id].category = result.detail.category;
    }
    
    return true;
}

bool TaskManagementSystem::change_task_category(const std::string& task_id, const std::string& new_category) 
{
    if (tasks_.find(task_id) == tasks_.end()) return false;
    Operation Operation_;
    OperationDetail OperationDetail_;
    Operation_.operation = "category";
    OperationDetail_.category = tasks_[task_id].category;
    OperationDetail_.task = tasks_[task_id];
    Operation_.task_id = task_id; 
    Operation_.detail = OperationDetail_;
    operation_history_.push(Operation_);
    tasks_[task_id].category = new_category;
   
    return true;
}