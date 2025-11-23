#include "solution.hpp"
#include <iomanip>
#include <sstream>

void Gradebook::add_grade(const std::string& student_id, const std::string& subject, double grade) 
{
    grades[student_id][subject] = grade;
    // TODO: Add or update the grade for the given student_id and subject.
    //       If a grade already exists for this student_id and subject, 
    //       update the existing grade with the new one.
}

std::optional<double> Gradebook::get_grade(const std::string& student_id, const std::string& subject) const {
    // TODO: Retrieve the grade for the specified student_id and subject.
    //       Return std::nullopt if the student or subject does not exist 
    //       in the gradebook.
    auto it =  grades.find(student_id);
    if(it != grades.end())
    {
        auto subect_it = it ->second.find(subject);
        if(subect_it != it->second.end())
        {
            return  subect_it ->second;
        }
        
    }
   
    return std::nullopt;
}

bool Gradebook::delete_grade(const std::string& student_id, const std::string& subject) 
{
    // TODO: Remove the grade associated with the given student_id and subject.
    //       Return true if the grade was successfully deleted, and false otherwise.
    //       If after deletion the student has no grades left, remove the student from the gradebook.
    auto it =  grades.find(student_id);
    if(it != grades.end())
    {
        auto subect_it = it ->second.find(subject);
        if(subect_it != it->second.end())
        {
            it->second.erase(subject);
            if(it ->second.empty())
            {
                grades.erase(it);
            }
            return true;
        }
    }
    
    return false;
}

std::map<std::string, double> Gradebook::get_statistics() const {
    // TODO: Calculate and return statistical information about the gradebook.
    //       Return a map containing:
    //       - "number_of_students": total number of students in the gradebook
    //       - "average_grade": average grade across all students and subjects
    //       - "highest_grade": the highest grade present
    //       - "lowest_grade": the lowest grade present
    //       If the gradebook is empty, appropriate NaN values should be returned for average, highest and lowest grades.
    double total_grades = 0.0;
    double num_grades = 0.0;
    double highest_grade = std::numeric_limits<double>::lowest();
    double lowest_grade = std::numeric_limits<double>::max();
    for(const auto& [id, subjects]: grades)
    {
        for (const auto& [subject, grade] : subjects)
        {
            total_grades += grade;
            num_grades++;
            highest_grade = std::max(highest_grade, grade);
            lowest_grade = std::min(lowest_grade, grade);
        }
    }
    if (num_grades == 0) {
        return {
            {"number_of_students", static_cast<double>(grades.size())},
            {"average_grade", std::nan("")},
            {"highest_grade", std::nan("")},
            {"lowest_grade", std::nan("")}
        };
    }
    double average = total_grades / num_grades;
    return {
        {"number_of_students", static_cast<double>(grades.size())},
        {"average_grade", average},
        {"highest_grade", highest_grade},
        {"lowest_grade", lowest_grade}
    };
}

std::string Gradebook::format_as_csv() const 
{
    std::ostringstream oss;
    for(const auto& [id, subjects]: grades)
    {
        for (const auto& [subject, grade] : subjects)
        {
            oss<< id<< ","<< subject << "," <<std::fixed <<std::setprecision(2)<<grade << "\n";
            
        }
    }
    auto statistics = get_statistics();
    oss << std::setprecision(0) << statistics["number_of_students"] << ","
    << std::setprecision(2) << std::fixed << statistics["average_grade"] << ","
    << statistics["highest_grade"] << ","
    << statistics["lowest_grade"];
    
    
    // TODO: Format the gradebook entries as a CSV string.
    //       Each line should be in the format: "student_id,subject,grade".
    //       Follow the list of grades with a line "number_of_students,average_grade,highest_grade,lowest_grade",
    //       aggregating the calculated statistics from the gradebook.
    return oss.str();
}