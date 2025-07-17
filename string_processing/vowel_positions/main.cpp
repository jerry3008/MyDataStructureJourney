#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <string>
#include <iostream>
using namespace std;


std::vector<int> findVowels(const std::string& s) {
    vector<int>result;
    std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int i = 0; i < s.length(); ++i)
    {
        if(vowels.count(s[i]))
        {
            result.push_back(i);
        }
       
    }
    return result;
}