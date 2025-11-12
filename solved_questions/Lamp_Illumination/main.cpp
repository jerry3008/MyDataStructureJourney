#include <vector>
#include <map>

using namespace std;
int lampIllumination(vector<vector<int>> lamps) 
{
    map<long long, int>events;
    for(const auto & lamp : lamps)
    {
        long long start = (long long)lamp[0] - lamp[1];
        long long end = (long long)lamp[0] + lamp[1] + 1;
        events[start] += 1;
        events[end] -= 1;
    }

    int maxcount = 0;
    int curr = 0;
    bool first = true;
    long long answer = 0;

    for (const auto& [pos, value] : events) 
    {
        curr += value;
        if (curr > maxCount || first) 
        {
            maxCount = curr;
            answer = pos;  // <-- You need the key (pos) here!
            first = false;
        }
    }
    return (int) answer;
}