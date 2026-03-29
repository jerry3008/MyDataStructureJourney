#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <string>
#include <iostream>

class Logger {
public:
    int logVersion = 1;
    bool isJsonFormat = false;

    void logMessage(const std::string& message);

private:
    void logMessageV1(const std::string& message);
    void logMessageV2(const std::string& message);
};

#endif  // SOLUTION_HPP_