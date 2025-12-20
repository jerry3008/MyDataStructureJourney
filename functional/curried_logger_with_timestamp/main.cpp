#include <iostream>
#include <functional>
#include <string>

// Currying Example with More Parameters in a Logging System
// TODO: Modify the function to accept a timestamp parameter
// Hint: introduce a new lambda that has existing lambdas inside
auto logMessage = [](const std::string& timestamp)
{
    return [timestamp](const std::string& level)
    {
        return [timestamp, level](const std::string& app) 
        {
            return [timestamp,level, app](const std::string& message) 
            {
                std::cout << "[" <<timestamp << "] " << "[" << level << "] " << app << ": " << message << '\n';
            };
        };
    };
};

int main() {
    // TODO: Update the logMessage calls to include a timestamp
    // TODO: include "2023-10-03 14:55:00" as a timestamp
    auto logTime = logMessage("2023-10-03 14:55:00");
    auto logWarning = logTime("WARNING");
    
    auto logWarningApp1 = logWarning("App1");
    logWarningApp1("Low disk space");

    // TODO: include "2023-10-03 14:56:00" as a timestamp
    auto logInfoApp2 = logMessage("2023-10-03 14:56:00")("INFO")("App2");
    logInfoApp2("User signed in");

    return 0;
}
