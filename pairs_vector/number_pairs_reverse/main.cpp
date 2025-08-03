#include <algorithm>
#include <utility>
#include <vector>
#include <unordered_set>
#include <cmath>
std::vector<std::pair<int, int>> solution(const std::vector<int>& numbers) 
{
    std::vector<std::pair<int, int>>result;
    std::unordered_set<int>elements(numbers.begin(), numbers.end());
    int revNum  =  0;
    for(const auto & element : numbers)
    {
        int n = element;
        revNum = 0;
        while (n > 0)
        {
            int digit = n % 10;
            revNum = revNum * 10 + digit;
            n /= 10;
        }
        if (elements.find(revNum) != elements.end())
        {
            result.push_back({element, revNum});
        }
    }
    
   
    // TODO: implement solution here
    return result;
}