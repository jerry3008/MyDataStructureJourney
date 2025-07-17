#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
std::string findCommonSubstring(const std::string &s, int length) 
{
    std:: unordered_map<std::string, int> count;
    int maxCount = 0;
    std::string result = "";
    for(int i = 0; i <= s.size() - length; ++i)
    {
        std::string sub = s.substr(i, length);
        count[sub]++;
    }
    for(const auto & element : count)
    {
        if(element.second > maxCount)
        {
            maxCount = element.second;
            result = element.first;
        }
        else if(element.second == maxCount && element.first < result)
        {
            result = element.first;
        }
    }
    return result;
}