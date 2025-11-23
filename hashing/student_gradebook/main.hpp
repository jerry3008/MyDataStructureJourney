#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <map>
#include <optional>
#include <limits>
#include <cmath>
#include <sstream>
#include <iomanip>

class Gradebook {
public:
    void add_grade(const std::string& student_id, const std::string& subject, double grade);
    
    std::optional<double> get_grade(const std::string& student_id, const std::string& subject) const;
    
    bool delete_grade(const std::string& student_id, const std::string& subject);
    
    std::map<std::string, double> get_statistics() const;
    
    std::string format_as_csv() const;

private:
    std::map<std::string, std::map<std::string, double>> grades;
};
#endif  // SOLUTION_HPP_