#include "solution.hpp"

int WeatherService::getCurrentWeather() {
    return 20;  // Temperature in Celsius as an integer
}
WeatherServiceAdapter::WeatherServiceAdapter() {}

int WeatherServiceAdapter::getCurrentWeather() 
{
    return WeatherService_.getCurrentWeather();
}
std::unordered_map<std::string, int> WeatherDataProvider::getDetailedWeather()
{
    return {{"temperature", 20}, {"pressure", 1013}, {"humidity", 75}};
}

std::unordered_map<std::string, int> WeatherServiceAdapter::getDetailedWeather()
{
   return  WeatherDataProvider_.getDetailedWeather();
}

int main() {
    WeatherServiceAdapter adapter;
    std::cout << "Current temperature: " << adapter.getCurrentWeather() << "°C" << std::endl;
    
    auto detailedWeather = adapter.getDetailedWeather();
    std::cout << "Detailed Weather: Temperature: " << detailedWeather["temperature"] 
              << "°C, Pressure: " << detailedWeather["pressure"] 
              << " hPa, Humidity: " << detailedWeather["humidity"] << "%" << std::endl;
    
    return 0;
}