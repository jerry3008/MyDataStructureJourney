#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <map>
#include <string>
#include <optional>

class FinanceTracker {
public:
    bool add_income(const std::string& username, const std::string& category, float amount);
    bool add_expense(const std::string& username, const std::string& category, float amount);
    std::optional<std::map<std::string, float>> get_balance(const std::string& username, const std::string& category);
    
private:
    std::map<std::string, std::map<std::string, std::map<std::string, float>>> records;
};

#endif  // SOLUTION_HPP_