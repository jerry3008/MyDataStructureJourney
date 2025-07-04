#include <vector>
#include <optional>

std::optional<int> findMin(const std::vector<int>& nums) {
    if(nums.empty())
    {
        return {};    
    }
    int minimum_e = nums[0];
    for(const auto & element : nums)
    {
        if(element < minimum_e)
        {
            minimum_e = element;
        }
    }
    // TODO: implement the function to find the minimum number from a vector
    return std::optional<int>(minimum_e);
}