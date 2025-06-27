#include <vector>
using namespace std;
#include <algorithm>
#include <utility>
#include <cmath>

std::vector<int> solution(const std::vector<int>& X, const std::vector<int>& Y) {
    std::vector<pair<int, int>>x_sorted;
    std::vector<int> res(Y.size(), 0);
    for(int i = 0; i < X.size(); ++i)
    {
        x_sorted.push_back({X[i], i});
    }
    sort(x_sorted.begin(), x_sorted.end());
    for(int i = 0; i< Y.size(); ++i)
    {
        double target = Y[i]/2.0;
        auto it = lower_bound(x_sorted.begin(), x_sorted.end(), make_pair(target, 0), [](const auto & a, const auto b){
            return a.first < b.first;
        });
        int closestidx;
        if(it == x_sorted.begin())
        {
            closestidx = it -> second;
        }else if(it == x_sorted.end())
        {
            closestidx = (it - 1) -> second;
        }else{
            int val1 = (it - 1)-> first;
            int val2 =  it -> first;
            int idx1 = (it - 1)->second;
            int idx2 = it -> second;
            int dist1 = abs(val1 - target);
            int dist2 = abs(val2 - target);
            
            if(dist1 < dist2)
            {
                closestidx = idx1;
            }else if (dist2 < dist1) 
            {
                closestidx = idx2;
            }else{
                closestidx = (idx1 < idx2) ? idx1 : idx2;
            }
        }
        res[i] = Y[closestidx];
    }
    // TODO: implement
    return res;
}