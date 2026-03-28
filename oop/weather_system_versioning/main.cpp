#include "solution.hpp"
#include <string>

std::string WeatherSystem::getWeatherSummary(int version) 
{
    if (version == 1) 
    {
        return weatherSummaryV1();
    } else if (version == 2) {
         return weatherSummaryV2(); // Add 'return' here
    }

    return "Error: Invalid version number.";

    
    // TODO: Implement the logic to call the correct version of the weather summary based on the passed version number.
}

std::string WeatherSystem::weatherSummaryV1() {
    // Dummy data for demonstration
    int highTemp = 25, lowTemp = 18;
    return "High: " + std::to_string(highTemp) + "C, Low: " + std::to_string(lowTemp) + "C";
}

// TODO: Implement weatherSummaryV2 here to include high and low temperatures, chance of precipitation, and wind speed.
// Expected Output: "High: 25C, Low: 18C, Precipitation: 50%, Wind Speed: 15km/h"
std::string WeatherSystem::weatherSummaryV2() {
    // Dummy data for demonstration
    int highTemp = 25, lowTemp = 18, Precipitation = 50,  Wind_Speed = 15;
    return "High: " + std::to_string(highTemp) + "C, Low: " + std::to_string(lowTemp) + "C, Precipitation: " + std::to_string(Precipitation)+ "%, Wind Speed: " + std::to_string(Wind_Speed) + "km/h";
}

int main() {
    WeatherSystem weatherSystem;
    
    std::string summaryV1 = weatherSystem.getWeatherSummary(1);
    std::cout << summaryV1 << std::endl;
    
    std::string summaryV2 = weatherSystem.getWeatherSummary(2);
    std::cout << summaryV2 << std::endl;
    
    std::string summaryInvalid = weatherSystem.getWeatherSummary(3);
    std::cout << summaryInvalid << std::endl;
    
    return 0;
}