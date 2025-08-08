#include <vector>
#include <utility>
#include <string>

using namespace std;
std::vector<std::pair<char, int>> solution(const std::string& s) 
{
    vector<std::pair<char, int>>groups;
    int count = 0;
    char same_string = '\0';
    
    for(auto it = s.rbegin(); it != s.rend(); it++)
    {
        if(same_string == '\0')
        {
            same_string = *it;
            count = 1;
        }
        else if (*it == same_string) 
        {
            count++;
        }else 
        {
            groups.push_back(std::make_pair(same_string, count));
            same_string = *it;
            count = 1;
        }
    }
    if(same_string != 0)
    {
        groups.push_back(std::make_pair(same_string, count));
    }
    
    
    return groups;
}