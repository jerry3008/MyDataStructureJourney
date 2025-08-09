#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> add_seconds_to_times(const std::vector<std::string>& timePoints, int seconds) 
{
    std::vector<std::string> result;
    for(const auto  elements : timePoints)
    {
        std::stringstream ss(elements);
        std::vector<int> time_parts;
        std:: string words;
        
    
        while(std::getline(ss, words, ':'))
        {
            time_parts.push_back(std::stoi(words));
        }
        int total = time_parts[0]*3600 + time_parts[1] * 60 + time_parts[2];
        total += seconds;
        total = total % (24 * 3600);
        int hours = total / 3600;
        int minutes = (total % 3600) / 60;
        int second = total % 60;
        std::ostringstream os;
        os<< std::setfill('0')<< std::setw(2)<<hours << ":" <<std::setw(2)<<minutes<< ":"<<std::setw(2)<<second;
        result.push_back(os.str());
    }
    return result;
}