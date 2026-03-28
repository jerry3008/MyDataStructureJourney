#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <iostream>

class WeatherSystem {
public:
    std::string getWeatherSummary(int version);

private:
    std::string weatherSummaryV1();
    
    std::string weatherSummaryV2();
    // TODO: Define weatherSummaryV2 method
};

#endif  // SOLUTION_HPP_