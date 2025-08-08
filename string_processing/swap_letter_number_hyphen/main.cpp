#include <cctype>
#include <cstddef>
#include <string>
#include <sstream>
using namespace std;
#include <vector>
#include <algorithm>

std::string solution(const std::string& s) 
{
    
    string word;
    stringstream ss(s);
    vector<string> result; 
    while (getline(ss, word, '-')) 
    {
        string transformed;
        if (std::all_of(word.begin(), word.end(), ::isdigit)) 
        {
            int num  = std::stoi(word);
            char letter = 'a' + num - 1;
            result.push_back(std::string(1, letter));  
        }else 
        {
            if (std::all_of(word.begin(), word.end(), ::isalpha))
            {
                int pos = word[0] - 'a' + 1;
                result.push_back(std::to_string(pos));
            }
        
        }
    }
    
    ostringstream join;
    
    for(size_t i = 0; i < result.size(); ++i)
    {
        if (i > 0) join << "-";
        join << result[i];
    }
    return join.str();
}