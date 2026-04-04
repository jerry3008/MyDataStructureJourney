#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <unordered_map>
#include <string>
#include <iostream>

// Existing WeatherService class
class WeatherService {
public:
    int getCurrentWeather();
};
class WeatherDataProvider
{
    public:
   std::unordered_map<std::string, int> getDetailedWeather();
    
};
class WeatherServiceAdapter
{
    public:
    int getCurrentWeather();
    std::unordered_map<std::string, int>  getDetailedWeather();
    
    WeatherServiceAdapter();
    
    private:
    WeatherDataProvider WeatherDataProvider_;
    WeatherService WeatherService_;
    
};

#endif  // SOLUTION_HPP_