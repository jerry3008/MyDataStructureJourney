#include <vector>
#include <utility>
#include <unordered_map>
#include <algorithm>

// TODO: Implement the solution here
std::pair<int, int> solution(const std::vector<int>& arrA, const std::vector<int>& arrB) 
{
  std::unordered_map<int, int> seen;
    std::vector<std::pair<int, int>> pairs;
    for (int i = 0; i < arrA.size(); ++i) {
        int diff = arrA[i] - arrB[i];
        if (seen.count(-diff)) {
            pairs.push_back({seen[-diff], i});
        }
        if (!seen.count(diff)) {
            seen[diff] = i;
        }
    }
    std::sort(pairs.begin(), pairs.end());
    return pairs[0]; // Placeholder return value. Replace it with the correct implementation.
}