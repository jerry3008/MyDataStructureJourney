#include <algorithm>
#include <vector>
#include <climits> 
#include <cmath>

std::vector<int> reverseInGroups(std::vector<int>& numbers, int k) 
{
    
    for(int i =  0; i < numbers.size(); i += k)
    {
        int end = std::min(i + k - 1, static_cast<int>(numbers.size()) - 1);
        
        std::reverse(numbers.begin() + i, numbers.begin() + end + 1);
        
    }
    
    // TODO: implement the solution here
    return numbers;
}