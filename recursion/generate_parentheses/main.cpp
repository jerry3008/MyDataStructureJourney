#include "solution.hpp"
#include <algorithm>
#include <string>
using namespace std;
#include <vector>



void backtrack(string current, int left, int right, vector<string>& result)
{
    if(left == 0 && right == 0)
    {
        result.push_back(current);
        return;
    } 
    
    if(left > 0)
    {
        backtrack(current + "(", left - 1, right, result);
        
    }if(right > left)
    {
        backtrack(current + ")", left, right-1, result);
    }
    
}

std::vector<std::string> generateParens(int n) 
{
    if(n == 0)
    {
        return {};
    }
    vector<string>result;
    backtrack("",  n, n, result);
    
    return result;
}