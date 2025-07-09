#include <unordered_map>
#include <iostream>
#include <algorithm>


using namespace std;
char firstNonRepeatingChar(const string& input_string) 
{
    unordered_map<char, int>count;
    for(const auto & elem : input_string)
    {
        count[elem]++;
    }
    
    auto it =find_if(input_string.begin(), input_string.end(), [&](char c)
    {
        return count[c] == 1;
    });
    
    if(it != input_string.end())
    {
        return *it;
    }
    
    return '\0';
}
