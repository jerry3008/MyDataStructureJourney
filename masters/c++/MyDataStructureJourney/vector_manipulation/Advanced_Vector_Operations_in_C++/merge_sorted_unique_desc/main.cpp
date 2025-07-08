#include <algorithm>
#include <set>
#include <vector>
using namespace std;

std::vector<int> mergeUnique(const std::vector<int>& arr1, const std::vector<int>& arr2) 
{
    std::set<int, std::greater<int>> mySet;
    std::vector<int>result;
    mySet.insert(arr1.begin(), arr1.end());
    mySet.insert(arr2.begin(), arr2.end());
    
    for(const auto & allElements : mySet)
    {
        result.push_back(allElements);
    }
    return result;
}