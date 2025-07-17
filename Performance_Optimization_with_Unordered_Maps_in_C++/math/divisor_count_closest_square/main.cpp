#include <vector>
using namespace std;
#include <cmath>
#include <algorithm>

std::vector<int> solution(const std::vector<int>& arr) {
    vector<int>result;
    vector<int>div_count(101, 0);
    for(int i = 1; i <= 100; ++i)
    {
        int sq = i * i;
        int count = 0;
        for(int d = 1; d * d <=  sq; ++d)
        {
            if(sq % d == 0)
            {
                if(d == sq/d) count += 1;
                else count += 2;
            }
        }
        
        div_count[i] = count;
    }
    
    for(const auto & num : arr)
    {
        int k = static_cast<int>(std::sqrt(num));
        int dist1 = std::abs(num - k * k);
        int dist2 = std::abs(num - (k + 1) * (k + 1));
        if(dist2 < dist1)
        {
            k = k  + 1;
        }
        result.push_back(div_count[k]);
    }
    
    // TODO: Implement this
    return result;
}