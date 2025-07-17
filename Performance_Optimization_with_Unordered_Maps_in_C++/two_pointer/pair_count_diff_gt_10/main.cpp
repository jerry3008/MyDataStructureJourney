#include <algorithm>
#include <vector>
#include <utility>
long long solution(const std::vector<int>& arr) {
    long long count = 0;
    int n = arr.size();
    std::vector<int> sorted(arr);
    std::sort(sorted.begin(), sorted.end());

    for (int i = 0; i < n; ++i) 
    {
        auto it =std::lower_bound(sorted.begin() + i + 1, sorted.end(), sorted[i] + 11);
        int j = it - sorted.begin();
        count += n - j;
    }

    return count;
}