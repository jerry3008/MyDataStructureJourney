#include <cctype>
#include <string>
using namespace std;

std::string encode_rle(const std::string& s) 
{
    int count = 0;
    char same_string = '\0';
    string groups;
    
    for(char c : s)
    {
        if(!isalnum(c)) continue;
        if (same_string == '\0') 
        {
            same_string = c;
            count = 1;
        }else 
        {
            if(c == same_string)
            {
                count++;
            }else
            {
                groups += same_string;
                groups += std::to_string(count);
                same_string = c;
                count = 1;  
            }
            
        
        }
    }
    if(same_string != '\0')
    {
        groups += same_string;
        groups += std::to_string(count);
    }
    return  groups;
}