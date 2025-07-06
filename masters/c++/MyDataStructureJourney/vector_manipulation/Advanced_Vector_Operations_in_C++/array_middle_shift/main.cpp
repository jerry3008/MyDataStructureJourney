#include <vector>
#include <algorithm> // For std::reverse

void rearrange(std::vector<int>& nums) 
{
    int n = nums.size();
    int quarter = n / 4;
    int start = 0;
    int end = quarter - 1;
    std::reverse(nums.begin(), nums.begin() + quarter);
    std::reverse(nums.begin() + quarter, nums.end() - quarter);
    std::reverse(nums.begin(), nums.end() - quarter);
    
    // TODO: implement the function.
}