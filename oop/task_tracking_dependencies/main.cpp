#include "solution.hpp"
#include <algorithm>

bool TaskTrackingSystem::add_task(const std::string &task_id, const std::string &title, const std::string &description, const std::string &status, int priority) {
    if (tasks_.find(task_id) != tasks_.end()) {
        return false;
    }
    tasks_.insert(task_id);
    task_attributes_[task_id] = Task{title, description, status, priority};
    return true;
}

bool TaskTrackingSystem::remove_task(const std::string &task_id) 
{
 
    if (tasks_.erase(task_id)) 
    {
        task_attributes_.erase(task_id);
        for(const auto & parent_id : dependencies_[task_id])
        {
            dependents_[parent_id].erase(task_id);
        }
        for (const auto & Child_id : dependents_[task_id]) 
        {
            dependencies_[Child_id].erase(task_id);
        }
        dependencies_.erase(task_id);
        dependents_.erase(task_id);
        return true;
    }
    return false;
}

bool TaskTrackingSystem::update_task(const std::string &task_id, const std::optional<std::string> &title, const std::optional<std::string> &description, const std::optional<std::string> &status, const std::optional<int> &priority) 
{
    auto it = task_attributes_.find(task_id);
    if (it == task_attributes_.end()) 
    {
        return false;
    }

    if (title) it->second.title = *title;
    if (description) it->second.description = *description;
    if (status) 
    {
        it->second.status = *status;
        if(*status == "Closed")
        {
            for(const auto & dep_id : dependents_[task_id])
            {
                if(std::all_of(dependencies_[dep_id].begin(), dependencies_[dep_id].end(), [this](const std::string &d)
                {
                    return task_attributes_[d].status == "Closed"; 
                }))
                {
                    task_attributes_[dep_id].status = "Open";
                }
            }
        }
    }
    if (priority) it->second.priority = *priority;
    return true;
}

std::vector<std::string> TaskTrackingSystem::get_tasks_by_status(const std::string &status) const {
    std::vector<std::string> result;
    for (const auto &[task_id, task] : task_attributes_) {
        if (task.status == status) {
            result.push_back(task_id);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

std::vector<std::string> TaskTrackingSystem::get_tasks_by_priority(int priority) const {
    std::vector<std::string> result;
    for (const auto &[task_id, task] : task_attributes_) {
        if (task.priority == priority) {
            result.push_back(task_id);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}


bool TaskTrackingSystem::add_dependency(const std::string &task_id, const std::string &dependency_task_id) 
{
    if(tasks_.find(task_id) == tasks_.end()|| tasks_.find(dependency_task_id) == tasks_.end()|| dependencies_[dependency_task_id].count(task_id) || task_id == dependency_task_id)
    {
        return false;
    }
    else 
    {
    
        dependencies_[task_id].insert(dependency_task_id);
        dependents_[dependency_task_id].insert(task_id);
        return true;
    }
   
}

bool TaskTrackingSystem::remove_dependency(const std::string &task_id, const std::string &dependency_task_id) 
{
    if(tasks_.find(task_id) == tasks_.end()|| tasks_.find(dependency_task_id) == tasks_.end())
    {
        return false;
    }
    if(dependencies_[task_id].erase(dependency_task_id))
    {
        dependents_[dependency_task_id].erase(task_id);
        return true;
    }
    return false;
}

std::vector<std::string> TaskTrackingSystem::get_dependent_tasks(const std::string &task_id) const 
{
    if(tasks_.find(task_id) == tasks_.end())
    {
        return {};
    }
    auto it = dependents_.find(task_id);
    if (it != dependents_.end())
    {
        std::vector<std::string> result(it->second.begin(), it->second.end());
        std::sort(result.begin(), result.end());
        return result;
    
    } 
    return {};
}