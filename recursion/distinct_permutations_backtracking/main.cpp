#include <algorithm>
#include <vector>
using namespace std;

void backtracking(vector<int>& nums, vector<int>& path, vector<bool>&used, vector<vector<int>>& result)
{
    if(path.size() == nums.size())
    {
        result.push_back(path);
    }
    
    for(int i = 0; i < nums.size(); ++i)
    {
        if(used[i])
        {
            continue;
            
        }
        if(i > 0 && nums[i] == nums[i - 1] && !used[i-1])
        {
            continue;
        }
        path.push_back(nums[i]);
        used[i] = true;
        backtracking(nums, path, used, result);
        path.pop_back();
        used[i] = false;
    
    }
}
std::vector<std::vector<int>> permute(std::vector<int>& nums) 
{
    vector<int>path;
    vector<vector<int>>result;
    sort(nums.begin(), nums.end());
    vector<bool>used(nums.size(), false);
    backtracking(nums, path, used, result);
    
    return result;
}