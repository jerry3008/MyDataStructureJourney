#include <string>
#include <unordered_map>
using namespace std;

// TODO: Implement the function here
std::string commonChars(const std::string& string1, const std::string& string2) 
{
    unordered_map<char, int>count;
    for(const auto & elem2 : string2)
    {
        count[elem2]++;
    }
    std::string string3;
    for(const auto & elem1 : string1)
    {
        count.find(elem1);
        if(count[elem1] > 0)
        {
            string3.push_back(elem1);
            count[elem1]--;
        }
    }
    
     
    return string3;
}