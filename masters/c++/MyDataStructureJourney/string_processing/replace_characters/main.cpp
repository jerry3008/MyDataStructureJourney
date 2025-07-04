#include <vector>
#include <iostream>

std::string replaceCharacters(const std::string &input_string, char c1, char c2) 
{
    std::string element;
    for(int i = 0; i < input_string.length(); ++i)
    {
        if(input_string[i] == c1)
        {
            element += c2; 
        }else {
            element += input_string[i];
        }
    }
    
    return element;
}