#include <algorithm>
#include <vector>

void antiRotate(int nums[], int n, int k) 
{
    k = k % n;
    std::reverse(nums, nums + k);
    std::reverse(nums + k, nums + n);
    std::reverse(nums, nums + n);
    
    // TODO: Implement your solution
}