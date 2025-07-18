#include <algorithm>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void backtrack(const std::string& nums,  string path, vector<bool>&used, set<string>& result)
{
    if(!path.empty())
    {
        result.insert(path);
        std:: string reversed = path;
        reverse(reversed.begin(), reversed.end());
        result.insert(reversed);
    }
    for(int i = 0 ; i < nums.size(); ++i)
    {
        if(!used[i])
        {
            used[i] = true;
            backtrack(nums, path + nums[i], used, result);
            used[i] = false;
        }
    }
}

std::vector<std::string> allCombos(const std::string& s) {
    set<string> result;
    vector<bool> used(s.size(), false);
    backtrack(s, "", used, result);
    vector<string> out(result.begin(), result.end());
    sort(out.begin(), out.end());
    return out;
}