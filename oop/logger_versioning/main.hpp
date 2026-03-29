#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <vector>
#include <string>

class Logger {
public:
    Logger() : version(1), len_messages(0) {}
    void set_version(int version_number);
    void log(const std::string &message);
    void log_v2(const std::string &message, const std::string &severity);
    std::vector<std::string> get_logs() const;

private:
    int version;
    std::vector<std::string> messages;
    size_t len_messages;
};

#endif  // SOLUTION_HPP_