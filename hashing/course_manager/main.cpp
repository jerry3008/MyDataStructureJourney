#include "solution.hpp"
#include <numeric>
#include <cmath>
bool CourseManager::add_course(const std::string &course_id, const std::string &name, const std::string &instructor, int duration) 
{
    if(courses.count(course_id))return false;
    courses[course_id] = 
    {
        {"name", name},
        {"instructor", instructor},
        {"duration", duration}
    };

    return true;
}

std::optional<std::map<std::string, std::variant<std::string, int>>> CourseManager::get_course(const std::string &course_id) 
{
    if(courses.count(course_id))
    {
        return courses[course_id];
    }
    // TODO: Returns the course details as a map if the course exists, and std::nullopt otherwise.
    return std::nullopt;
}

bool CourseManager::update_course(const std::string &course_id, std::optional<std::string> name, std::optional<std::string> instructor, std::optional<int> duration) 
{
    if(courses.count(course_id))
    {
        if(name)courses[course_id]["name"] = *name;
        if(instructor)courses[course_id]["instructor"] = *instructor;
        if(duration)courses[course_id]["duration"] = *duration;
        return true;
    }
    // TODO: Updates course information based on non-null parameters. Returns true if the course was updated, false otherwise.
    return false;
}

std::vector<std::string> CourseManager::filter_courses(std::optional<int> min_duration, std::optional<int> max_duration, std::optional<std::string> instructor) 
{
    std::vector<std::string>filterered_Cids;
    for(const auto& [courseid, courseinfo]: courses)
    {
        if(min_duration && std::get<int>(courseinfo.at("duration")) < *min_duration)
        {
            continue;
        }
        if(max_duration && std::get<int>(courseinfo.at("duration")) > *max_duration)
        {
            continue;
        }
        if(instructor && std::get<std::string>(courseinfo.at("instructor")) != *instructor)
        {
            continue;
        }
        filterered_Cids.push_back(courseid);
    }
    // TODO: Returns a list of course IDs that match the specified criteria: minimum duration, maximum duration, and instructor name. 
    // If a criterion is std::nullopt, it should not be applied during filtering.
    return filterered_Cids;
}

std::map<std::string, std::variant<int, float>> CourseManager::aggregate_stats() 
{
    std::map<std::string, std::variant<int, float>>aggregate_sta;

    int total_duration = std::accumulate(courses.begin(), courses.end(), 0, [](int sum, const auto& pair) 
    {
        return sum + std::get<int>(pair.second.at("duration"));
    });
    float average;
    int total_courses = courses.size();
    if(total_courses == 0)
    {
        average = 0.0f;
        
    }else 
    {
       average = (float)total_duration / total_courses;
       average = std::round(average * 10) / 10;
    }
    aggregate_sta["total_courses"] = total_courses;
    aggregate_sta["average_duration"] = average;
    return aggregate_sta;
}