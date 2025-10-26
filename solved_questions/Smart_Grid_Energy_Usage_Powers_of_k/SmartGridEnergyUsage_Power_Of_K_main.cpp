#include <vector>
#include <unordered_set>
using namespace std;

int countPowerOfK(const Vector<int> & readings, int k)
{
    unordered_set<int> powers;
    long long val = 1;

    while (val <= 1e9)
    {
        powers.insert((int)val);
        val *= k;
        if(val > 1e9) break;
    }

    int count = 0;
    for(int num : readings)
    {
        if(powers.count(num)) count++;
    }
    return count;
}