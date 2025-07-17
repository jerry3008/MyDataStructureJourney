#include <utility>
#include <vector>

std::pair<int, int> countEvenOdd(const std::vector<int>& nums) 
{
    int even = 0;
    int odd = 0;
    for(const auto & elements : nums)
    {
        if(elements % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;        
        }
        
    }
    // TODO: implement the function to return a tuple (even_count, odd_count)
    return std::make_pair(even, odd);
}