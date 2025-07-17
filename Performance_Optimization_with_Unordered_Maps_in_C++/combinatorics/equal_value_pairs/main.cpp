#include <vector>
#include <unordered_map>

int solution(const std::vector<int>& arr) {
    std::vector<int> value = arr;
    std::unordered_map<int, int>alpha;
    for(const auto & invalue : value)
    {
        alpha[invalue]++;
    }
    
    int totalpairs = 0;
    for(const auto& entry :  alpha)
    {
        int count = entry.second;
        totalpairs += count * (count - 1)/2;
    }
        
    // TODO: implement
    return totalpairs;
}