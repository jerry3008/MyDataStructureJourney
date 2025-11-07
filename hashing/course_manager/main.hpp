#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <map>
#include <vector>
#include <optional>
#include <variant>
#include <utility>

class CourseManager {
public:
    bool add_course(const std::string &course_id, const std::string &name, const std::string &instructor, int duration);

    std::optional<std::map<std::string, std::variant<std::string, int>>> get_course(const std::string &course_id);

    bool update_course(const std::string &course_id, std::optional<std::string> name, std::optional<std::string> instructor, std::optional<int> duration);

    std::vector<std::string> filter_courses(std::optional<int> min_duration, std::optional<int> max_duration, std::optional<std::string> instructor);

    std::map<std::string, std::variant<int, float>> aggregate_stats();

private:
    std::map<std::string, std::map<std::string, std::variant<std::string, int>>> courses;
};

#endif // SOLUTION_HPP_