#include <vector>
using namespace std;
#include <string>
#include <iostream>

std::string changeCase(const std::string& input_string) 
{
    string towork = input_string;
    for(int i = 0; i < towork.length(); ++i)
    {
        if (towork[i] >= 'a' && towork[i] <= 'z') 
        {
            towork[i] = towork[i] - 32;
        }else if (towork[i] >= 'A' && towork[i] <= 'Z')
        {
            towork[i] = towork[i] + 32;
        }
    }
    return towork;
}