#include "solution.hpp"

void Logger::logMessage(const std::string& message) 
{
    if(logVersion == 1 )
    {
        logMessageV1(message);
    }else if (logVersion == 2) {
        logMessageV2(message);
    }
    // TODO: Choose the correct log operation based on the version.
}

void Logger::logMessageV1(const std::string& message) 
{
    std::cout<<message<<std::endl;
    // TODO: Implement logging as plain text.
}

void Logger::logMessageV2(const std::string& message) 
{
    if(isJsonFormat)
    {
        std::cout << "{ \"message\": \"" << message << "\" }" << std::endl;
        
    }else 
    {
     logMessageV1(message);
    }
    // TODO: Implement logging in JSON format or plain text based on the isJsonFormat flag.
}

int main() {
    Logger logger;
    logger.logVersion = 2;
    logger.isJsonFormat = true;

    logger.logMessage("This is a log message in JSON format.");  
    // Output: { "message": "This is a log message in JSON format." }

    logger.isJsonFormat = false;
    logger.logMessage("This is a plain text log message.");
    // Output: This is a plain text log message.

    return 0;
}