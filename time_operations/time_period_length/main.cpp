#include "solution.hpp"
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// TODO: implement the function
int timePeriodLength(const std::string& timePeriod) 
{
    std::stringstream ss(timePeriod);
    string start, end;
    std::getline(ss, start, '-');
    std::getline(ss, end);
    start.erase(0, start.find_first_not_of(' '));
    start.erase(start.find_last_not_of(' ') + 1);
    end.erase(0, end.find_first_not_of(' '));
    end.erase(end.find_last_not_of(' ') + 1);
    vector<int> startParts;
    stringstream sstream(start);
    string part;
    while (getline(sstream, part, ':')) 
    {
        startParts.push_back(stoi(part));
    
    }
    vector<int> endParts;
    stringstream sstreamend(end);
    string endpart;
    while (getline(sstreamend, endpart, ':')) 
    {
        endParts.push_back(stoi(endpart));
    
    }
    int startminutes = startParts[0] * 60  + startParts[1];
    int endMinutes = endParts[0] * 60 + endParts[1];
    
    
    
    
    return endMinutes - startminutes;
}