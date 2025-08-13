#include <cstddef>
#include <string>
#include <vector>
#include <algorithm>
std::string solution(const std::string &num1, const std::string &num2) 
{
    std::vector<char>result;
    int i = num1.size()-1;
    int j = num2.size()-1;
    int borrow = 0;
    while(i >= 0 || j >= 0 )
    {
        int n1 = (i >= 0)? num1[i] - '0' - borrow : 0 ;
        int n2 = (j >= 0)? num2[j] - '0' : 0;
        
        if(n1 < n2)
        {
            n1 += 10;
            borrow = 1;
        } else 
        {
            borrow = 0;
        }
        result.push_back('0' + (n1 - n2));
        i--;
        j--;
    }
    std::reverse(result.begin(), result.end());
    size_t first_non_zero = 0;
    while (first_non_zero  < result.size() && result[first_non_zero] == '0') 
    {
        first_non_zero++;
    }
    if(first_non_zero == result.size()) return "0";;
    
    return std::string(result.begin() + first_non_zero, result.end());
}