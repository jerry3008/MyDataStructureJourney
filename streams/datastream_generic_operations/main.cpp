#include <iterator>
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

class DataStream {
public:
    DataStream(const std::vector<std::map<std::string, std::string>>& data) : data(data) {}

    // TODO: Implement method to filter data based on a condition
    DataStream filterData(std::function<bool(const std::map<std::string, std::string>&)> conditionFunc) const 
    {
        std::vector<std::map<std::string, std::string>> filtered_data;
        std::copy_if(data.begin(), data.end(), std::back_inserter(filtered_data), conditionFunc);
        return DataStream(filtered_data);
    }

    // TODO: Implement method to project specific fields from data
    DataStream projectData(const std::vector<std::string>& fields) const 
    {
        std::vector<std::map<std::string, std::string>> project_data;
        for(const auto & proj : data)
        {
            std::map<std::string, std::string> projectedEntry;
            for (const auto& field : fields) 
            {
                if(proj.find(field) != proj.end())projectedEntry[field] = proj.at(field);
            }
            project_data.push_back(projectedEntry);
        }
        return DataStream(project_data);
    }

    // TODO: Implement method to aggregate data using an aggregation function
    double aggregateData(const std::string& field, std::function<double(const std::vector<std::string>&)> aggrFunc) const 
    {
        std::vector<std::string>result;
        for(const auto & loop : data)
        {
            if (loop.find(field) != loop.end()) 
            {
                result.push_back(loop.at(field));
            }
        }
        return aggrFunc(result);
    }

private:
    std::vector<std::map<std::string, std::string>> data;
};

int main() {
    DataStream stream({
        { {"name", "Alex"}, {"department", "IT"}, {"salary", "95000"} },
        { {"name", "Beth"}, {"department", "Sales"}, {"salary", "80000"} },
        { {"name", "Cody"}, {"department", "Sales"}, {"salary", "75000"} },
        { {"name", "Dana"}, {"department", "IT"}, {"salary", "99000"} },
        { {"name", "Evan"}, {"department", "HR"}, {"salary", "65000"} }
    });
    double avgSalary = stream.projectData({"department", "salary"})
    .filterData([](const std::map<std::string, std::string>& entry) {
        return entry.at("department") == "Sales" && std::stoi(entry.at("salary")) > 70000;
    })
    .aggregateData("salary", [](const std::vector<std::string>& salaries) {
        double sum = 0;
        for (const auto& s : salaries) sum += std::stoi(s);
        return sum / salaries.size();
    });

    std::cout << avgSalary << std::endl;
    
    return 0;
}