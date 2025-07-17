#include <string>
#include <unordered_map>
#include <vector>
using namespace std;


long long solution(const std::string& s) 
{
    unordered_map<char, int>freq;
    long long totalcount = 0;
    
    for(const auto & count : s)
    {
        freq[count]++;
    }
    
    for(auto it1 = freq.begin(); it1 != freq.end(); ++it1)
    {
        for(auto it2 = std::next(it1); it2 != freq.end(); ++it2)
        {
            it1 -> second;
            it2 -> second;
            if(it1 -> second >=2 )
            {
                totalcount  += 1LL * it1 -> second * (it1 -> second - 1 ) / 2 * it2 -> second;
            }
            if(it2 -> second >= 2)
            {
                totalcount += 1LL * it2 -> second * (it2 ->second -1)/2 * it1 -> second;
            }
        }
    }
    return totalcount;
}