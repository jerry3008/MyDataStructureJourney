#include "solution.hpp"
#include <vector>

bool SafetyRecords::addDepartment(const std::string& factory_id, const std::string& department_name) 
{
   auto deptIt = records[factory_id].find(department_name);
     if(deptIt != records[factory_id].end())
   {
     return false;
   } 
    records[factory_id][department_name] = std::vector<std::string>();
    return true;
}

bool SafetyRecords::addInspection(const std::string& factory_id, const std::string& department_name, const std::string& inspection) 
{
   auto factoryIt = records.find(factory_id);
   if (factoryIt == records.end())
   {
        return false;
   }
   auto deptIt = factoryIt->second.find(department_name);
   if (deptIt == factoryIt->second.end()) 
    {
        return false;
    }
    deptIt->second.push_back(inspection);
    return true;
}

std::optional<std::vector<std::string>> SafetyRecords::getInspections(const std::string& factory_id, const std::string& department_name) 
{
    auto factoryIt = records.find(factory_id);
    if (factoryIt == records.end())
    {
        return std::nullopt;
    }
    auto deptIt = factoryIt->second.find(department_name);
    if (deptIt == factoryIt->second.end()) 
    {
        return std::nullopt;
    }
    return deptIt->second;
}