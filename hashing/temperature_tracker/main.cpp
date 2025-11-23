#include "solution.hpp"
#include <cctype>
#include <numeric>
#include <optional>

void TemperatureTracker::add_temperature(const std::string& city, double temp) 
{
    // TODO: Add a new temperature record for the specified city.
    //       If records for the city already exist, append the new temperature 
    //       to the existing records. Use a case-insensitive approach for city names.
    std::string city_copy = city;
    std::transform(city_copy.begin(), city_copy.end(), city_copy.begin(), ::tolower);
    temperatures[city_copy].push_back(temp);
    
}

std::vector<double> TemperatureTracker::get_temperatures(const std::string& city) 
{
    std::string city_copy = city;
    std::transform(city_copy.begin(), city_copy.end(), city_copy.begin(), ::tolower);
    auto it = temperatures.find(city_copy);
    if(it != temperatures.end())
    {
        return it-> second;
    }
    // TODO: Retrieve all recorded temperatures for the specified city.
    //       If the city does not exist, return an empty vector.
    //       City name comparison should be case-insensitive.
    return {};
}

bool TemperatureTracker::delete_temperatures(const std::string& city) 
{
    std::string city_copy = city;
    std::transform(city_copy.begin(), city_copy.end(), city_copy.begin(), ::tolower);
    return temperatures.erase(city_copy) > 0;
    
    // TODO: Delete all temperature records for the specified city.
    //       Return true if the records were successfully deleted.
    //       Return false if the city does not exist.
    //       Ensure the city name comparison is case-insensitive.
}

std::optional<double> TemperatureTracker::average_temperature(const std::string& city) 
{
    std::string city_copy = city;
    std::transform(city_copy.begin(), city_copy.end(), city_copy.begin(), ::tolower);
    
    auto it = temperatures.find(city_copy);
    if (it == temperatures.end() || it->second.empty()) return std::nullopt;
   double sum = std::accumulate(it->second.begin(), it->second.end(), 0.0);
   double avg = sum/ it->second.size();
    // TODO: Calculate and return the average temperature for the specified city.
    //       If the city does not exist or has no temperature records, return std::nullopt.
    //       Use case-insensitive comparison for city names.
   return std::optional<double>(avg);
}

std::string TemperatureTracker::format_all_temperatures(double min_temp) 
{
    std::ostringstream oss;
    int total_cities = 0;
    int total_records = 0;
    oss << "Cities: [";
    for(const auto& [id , data]: temperatures)
    {
        std::vector<double> filtered;
        for (double temp : data) 
        {
            if (temp >= min_temp) 
            {
                filtered.push_back(temp);
            }
        }
        if (!filtered.empty())
        {
            ++total_cities;
            total_records += filtered.size();
            oss << id << ": [";
            for (size_t i = 0; i < filtered.size(); ++i) 
            {
                oss << std::fixed << std::setprecision(1) << filtered[i];
                if (i < filtered.size() - 1) oss << ", ";
            }
            oss << "], ";
        }
        
            
    }
    oss << "]\nStatistics:\n";
    oss << "- Total Cities: " << total_cities << "\n";
    oss << "- Total Records: " << total_records << "\n";
    
    // TODO: Return a formatted string of all recorded temperatures across cities.
    //       Only include temperatures that meet or exceed the specified min_temp.
    //       The format should list each city (case-insensitive) followed by its temperatures.
    //       Include statistics: total number of cities listed and total number of records
    //       meeting the minimum temperature condition.
    return oss.str();
}