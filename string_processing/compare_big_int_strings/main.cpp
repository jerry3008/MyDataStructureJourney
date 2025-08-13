#include "solution.hpp"

int solution(const std::string& num1, const std::string& num2) 
{
    int index  = 0;
    if(num1.size() > num2.size()) return 1;
    if(num1.size() < num2.size()) return -1;
    while (index < num1.size()) 
    {
        if (num1[index] > num2[index]) return 1;
        if (num1[index] < num2[index]) return -1;
        index++;
    }
   
    return 0;
}