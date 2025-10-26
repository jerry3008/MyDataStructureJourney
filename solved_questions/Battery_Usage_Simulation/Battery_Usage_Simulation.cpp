#include <vector>
#include <algorithm>
using namespace std;

int batteryUsage(int t, vector<int> capacity, vector<int> recharge)
{
    int n = capacity.size();
    vector<int> nextAvailable(n, 0);
    int used = 0;
    int currTime = 0;

    while(currTime < t)
    {
       bool found = false;
       for(int i = 0 ; i< n; ++i)
       {
        if(nextAvailable[i] <= currTime)
        {
            found = true;
            used++;
            int use_time = min(capacity[i], t - currTime);
            nextAvailable[i] = currTime + use_time + recharge[i];
            currTime += use_time
            break;
        }
       } 
       if(!found) return -1;
    }
    return used;
}