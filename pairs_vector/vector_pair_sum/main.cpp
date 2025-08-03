#include <vector>

std::vector<int> solution(const std::vector<int>& numbers) 
{
    int n = numbers.size();
    int mid = n / 2;
    std::vector<int>result;
    for(int i  = 0; i < mid; ++i )
    {
        result.push_back(numbers[i] + numbers[n - i -1]);
        
    }
    if (n  % 2 != 0)
    {
        result.push_back(numbers[mid] + numbers[mid]);
    }
    return result;
}