#include <cctype>
#include <string>
#include <sstream>
using namespace std;
#include <vector>

std::string solution(const std::string& input_str) 
{
    vector<string>hold;
    istringstream ss(input_str);
    string word; 
    
    while (ss >> word) 
    {
        string transformed;
        for(int i = 0; i < word.size(); ++i)
        {
            if(i == 0)
            {
               if (isalpha(word[0])) transformed += toupper(word[0]);
               else transformed += word[0];
            }
            else 
            {
                transformed += tolower(word[i]);
            }
        }
        hold.push_back(transformed);
    }
    ostringstream join;
    if(!hold.empty())
    {
        join << hold[0];
        for(size_t i = 1; i < hold.size(); ++i)
        {
            join << " " << hold[i];
        }
    }
   
    return join.str();
}