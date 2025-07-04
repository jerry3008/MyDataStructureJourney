using namespace std;
#include <string>
#include <iostream>

std::string shiftString(const std::string &s) 
{
    string result = s;
    for(int i = 0; i< result.length(); ++i)
    {
        if(result[i] == 'z') 
        {
           result[i] = 'a'; 
        }else if (result[i] == 'Z')
        {
            result[i] = 'A';
        }else if (('a' <= result[i] && result[i] <= 'y') || ('A' <= result[i] && result[i] <= 'Y')) 
        {
            result[i]++;
        }
        
    }
    
    return result;
}