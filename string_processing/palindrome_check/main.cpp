#include <cctype>  // For std::isalnum, std::tolower
using namespace std;
#include <iostream>

bool isPalindrome(const std::string& input_string) 
{
    int left = 0;
    int right = input_string.length() - 1;
    while (left < right)
    {
        while (left < right && !std::isalnum(input_string[left])) 
        {
            left++;
        }
        while (left < right && !std::isalnum(input_string[right])) 
        {
            right--;
        }
        if (std::tolower(input_string[left]) != std::tolower(input_string[right])) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}