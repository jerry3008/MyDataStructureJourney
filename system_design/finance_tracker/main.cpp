#include "main.hpp"
#include <string>

bool FinanceTracker::add_income(const std::string& username, const std::string& category, float amount) 
{
    records[username]["income"][category] += amount;
    return true;
}

bool FinanceTracker::add_expense(const std::string& username, const std::string& category, float amount) {
    records[username]["expense"][category] += amount;
    return true;
}

std::optional<std::map<std::string, float>> FinanceTracker::get_balance(const std::string& username, const std::string& category) 
{
    if(records.find(username) != records.end())
    {
        float income = 0;
        float expense = 0;
        bool found = false;
        if (records[username]["income"].find(category) != records[username]["income"].end())
        {
            income = records[username]["income"][category];
            found = true;
        }
        if (records[username]["expense"].find(category) != records[username]["expense"].end()) 
        {
            expense = records[username]["expense"][category];
            found = true;
        }
        if(found)
        {
            float balance = income - expense;
             return std::map<std::string, float>
            { 
            {"income", income},
            {"expenses", expense},
            {"balance", balance}
            };
        }
        
       
    }
    
    return std::nullopt;
    
}