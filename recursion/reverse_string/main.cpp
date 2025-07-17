#include <string>

// TODO: implement the function to reverse the string using recursion.
std::string reverseString(const std::string& s) 
{
    if (s == "")
    {
        return "";
    }
    else 
    {
        int pos = 0;
        int len = s.length() - 1;
        std::string result = s.substr(pos, len);
        return s.back() + reverseString(result);
    }
    return "";  
}