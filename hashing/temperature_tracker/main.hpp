#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <optional>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <numeric>

class TemperatureTracker {
public:
    void add_temperature(const std::string& city, double temp);

    std::vector<double> get_temperatures(const std::string& city);

    bool delete_temperatures(const std::string& city);

    std::optional<double> average_temperature(const std::string& city);

    std::string format_all_temperatures(double min_temp);

private:
    // unordered_map to store city and their temperatures
    std::unordered_map<std::string, std::vector<double>> temperatures;
};

#endif  // SOLUTION_HPP_