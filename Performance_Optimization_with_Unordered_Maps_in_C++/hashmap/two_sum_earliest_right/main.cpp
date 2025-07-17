#include <unordered_map>
#include <vector>
std::vector<int> two_sum_earliest_right(const std::vector<int>& arr, int target) {
   std::unordered_map<int, int>mainkey;
    int final;
    
    for (const auto& value : arr)
    {
        final = target - value;
        if(mainkey.find(final) != mainkey.end())
        {
            return{final, value};
        }
        mainkey[value] = 1;
    }
    // TODO: implement a function that finds a pair of numbers whose sum equals the target
    return {}; // Return empty if no pair found
}   