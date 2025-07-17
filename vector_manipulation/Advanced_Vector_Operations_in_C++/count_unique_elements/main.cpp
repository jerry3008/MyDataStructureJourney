#include <unordered_map>
#include <vector>
using namespace std;

int countUnique(std::vector<int> lst) 
{
    unordered_map<int, int>unique_count;
    vector<int>result;
    int count = 0;
    for(const auto & num : lst)
    {
        unique_count[num]++;
    }
    for( const auto & elements : unique_count)
    {
        if(elements.second == 1)
        {
            count++;
        }
    }
    // TODO: Implement the function that counts unique elements in the given vector.
    return count;
}