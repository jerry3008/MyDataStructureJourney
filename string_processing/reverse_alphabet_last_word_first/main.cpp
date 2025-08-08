#include "solution.hpp"
#include <cctype>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

std::string solution(const std::string &input_str) 
{
 
    std::istringstream  ss(input_str);
    string word;
    vector<string> transformed_words;
    
    while (ss >> word) 
    {
        string transformed_word;
        for(char c : word)
        {
            if(islower(c))
            {
                char ch =  'z' + 'a' - c;
                transformed_word += ch;
                
            }
            else 
            {
                if(isupper(c))
                {
                    char ch  = 'Z' + 'A' - c;
                    transformed_word += ch;
                }
            
            }
            
        }
        transformed_words.push_back(transformed_word);
    
    }
    ostringstream oss;
    oss << transformed_words.back();
    for(int i = 0; i < transformed_words.size() - 1; ++i)
    {
        oss << " " << transformed_words[i];
    }
    
    return oss.str();
}