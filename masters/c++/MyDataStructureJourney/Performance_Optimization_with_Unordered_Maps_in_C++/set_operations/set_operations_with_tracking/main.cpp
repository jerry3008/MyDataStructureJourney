#include <algorithm>
#include <vector>
#include <set>
#include <climits>
using namespace std;

std::vector<int> solution(const std::vector<std::vector<int>>& operations) 
{
    vector<int>results;
    std::set<int> store;
    
    for(const auto & element : operations)
    {
        if(element[0] == 0)
        {
            store.insert(element[1]);
            results.push_back(store.size());
        } else if(element[0] == 1)
        {
            store.erase(element[1]);
            results.push_back(store.size());
        }else if (element[0] == 2) 
        {
            if (!store.empty()) 
            {
                results.push_back(*store.rbegin());
            } else 
            {
                results.push_back(-1);
            }
        }
        
    }
    
    return results;
}