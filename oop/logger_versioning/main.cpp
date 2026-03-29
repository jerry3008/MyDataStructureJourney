#include "solution.hpp"

void Logger::set_version(int version_number) 
{
    if (version_number == 1 || version_number == 2) 
    {
        version = version_number;
    }
    else
    {
        std::cout<< "Invalid version number"<<std::endl; 
    }
    // TODO: Implement logic to set the correct version. Print an error message for an invalid version.
}

void Logger::log(const std::string &message) 
{
    if(len_messages + message.size() <= 500)
    {
        messages.push_back(message);
        len_messages += message.size();
    }else 
    {
        std::cout<< "Warning space full"<<std::endl;
    }
    
    // TODO: Implement basic logging functionality.
}

void Logger::log_v2(const std::string &message, const std::string &severity) 
{
    std::string full_message = severity + ": " + message;
    if(version != 2)
    {
        std::cout<<"Error: log_v2 method is only available in version 2" <<std::endl;
        return;
    }
    else if (len_messages + full_message.size() <= 500) {
        messages.push_back(full_message);
        len_messages += full_message.size();
    } else {
        std::cout << "Warning space full" << std::endl;
    }
    // TODO: Implement enhanced logging functionality for version 2.
}

std::vector<std::string> Logger::get_logs() const {
    // TODO: Return the messages stored in the vector.
    return messages;
}

int main() {
    Logger logger;

    // Logger usage examples
    logger.set_version(1);
    logger.log("System boot");
    logger.set_version(2);
    logger.log_v2("Disk nearly full", "WARNING");
    logger.log_v2("System update available", "INFO");

    // Output logs
    for (const std::string &log : logger.get_logs()) {
        std::cout << log << std::endl;
    }

    return 0;
}