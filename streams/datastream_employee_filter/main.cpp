#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>

class DataStream {
public:
    DataStream(const std::vector<std::map<std::string, std::string>>& data) : data(data) {}

    // TODO: Implement a method to filter employees over age 30
    DataStream filterEmployeesOverAge30() const
    {
        std::vector<std::map<std::string, std::string>>filteredData;
        std::copy_if(data.begin(), data.end(), std::back_inserter(filteredData),[](const std::map<std::string, std::string> & entry)
        {
             return std::stoi(entry.at("age")) > 30;
        }
        );
        return DataStream(filteredData);
    }
        
    // TODO: Implement a method to project employee names and salaries
    DataStream projectEmployeeNamesAndSalaries() const
    {
        std::vector<std::map<std::string, std::string>> projectedData;
        for(const auto& proj : data)
        {
            std::map<std::string, std::string>projectedEntry;
            projectedEntry["name"] = proj.at("name");
            projectedEntry["salary"] = proj.at("salary");
            projectedData.push_back(projectedEntry);
        }
    return DataStream(projectedData);
        
    }
    
    // TODO: Implement a method to aggregate average salary
    double aggregateAverageSalary() const
    {
        double total = 0;
        for(const auto & agg : data)
        {
            total += std::stoi(agg.at("salary"));
        }
        return data.empty() ? 0 : total / data.size();
    }
private:
    std::vector<std::map<std::string, std::string>> data;
};

// Sample data and usage
int main() {
    DataStream employees({
        { {"name", "Anna"}, {"age", "29"}, {"department", "Development"}, {"salary", "80000"} },
        { {"name", "Bill"}, {"age", "32"}, {"department", "Design"}, {"salary", "85000"} },
        { {"name", "Cara"}, {"age", "41"}, {"department", "Development"}, {"salary", "95000"} }
    });

    // Apply filter, project, and aggregate methods
    DataStream employeesOver30 = employees.filterEmployeesOverAge30().projectEmployeeNamesAndSalaries();
    double averageSalary = employeesOver30.aggregateAverageSalary();

    std::cout << "Average salary of employees over age 30: $" << averageSalary << std::endl;

    return 0;
}