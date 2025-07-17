#include <climits>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

std::vector<int> solution(const std::vector<int>& arr, const std::vector<std::pair<int, int>>& queries) 
{
    vector<int>result;
    int n= arr.size();
    std::vector<std::vector<int>> precalc(n, std::vector<int>(n, 0));
    for (int l = 0; l < n; ++l)
    {
        int max_sum = INT_MIN;
        int current_sum = 0;
        for(int r = l; r < n; ++r)
        {
            current_sum += arr[r];
            if(current_sum > max_sum)
            {
                max_sum = current_sum;
            }
            precalc[l][r] = max_sum;
        }
    }
    
    for(auto query : queries)
    {
        int l = query.first;
        int r = query.second;
        result.push_back(precalc[l][r]);
    }
    
    
    // TODO: implement the function
    return result;
}