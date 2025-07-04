#include <string>
#include <iostream>
using namespace std;

std::string swapCharacters(const std::string& s) 
{
    string elements;
    for(int i = 0 ; i + 1 < s.length();  i += 2)
    {
        elements += s[i+1];
        elements += s[i];
    }
        
    if (s.length() % 2 != 0) 
    {
        elements += s[s.length() - 1];
    }
    
    // TODO: implement the solution here
    return elements;
}