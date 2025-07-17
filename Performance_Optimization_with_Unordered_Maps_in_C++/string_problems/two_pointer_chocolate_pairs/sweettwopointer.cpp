#include <vector>
#include <utility>
#include <algorithm>
#include <utility>

std::vector<std::pair<int, int>> find_choc_pairs(std::vector<int>& sweetness) {
    std::sort(sweetness.begin(), sweetness.end());
    int left = 0;
    int right = sweetness.size() - 1;
    std::vector<std::pair<int, int>> pairs;
    while(left < right)
    {
        int total = sweetness[left] + sweetness[right];
        if(total == 0)
        {
            pairs.push_back({std::max(sweetness[left], sweetness[right]), std::min(sweetness[left], sweetness[right])});
            left++;
            right--;
        }else if(total < 0)
        {
            left++;
        }else{
            right--;
        }
    }
    std::sort(pairs.begin(), pairs.end());
    // TODO: implement the solution here
    return pairs;
}