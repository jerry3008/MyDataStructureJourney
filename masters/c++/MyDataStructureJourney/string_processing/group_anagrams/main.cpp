#include <vector>
#include <unordered_map>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;


vector<vector<string>> groupAnagrams(const vector<string>& strings) 
{
    
    unordered_map<std::string, vector<string>> groups;
    for(const auto & elem : strings)
    {
        string key = elem;
        sort(key.begin(), key.end());
        groups[key].push_back(elem);
    }
    vector<vector<string>>result;
    for(const auto & result1: groups)
    {
        result.push_back(result1.second);
    }
    return result;
}