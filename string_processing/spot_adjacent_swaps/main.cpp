#include <utility>
#include <vector>
#include <string>
using namespace std;
std::vector<std::pair<int, char>> spot_swaps(const std::string& source, const std::string& target) 
{
    int i = 0;
    std::vector<std::pair<int, char>>changed;
    while(i < source.size() - 1)
    {
        if(source[i] != target[i] && source[i] == target[i+1] && source[i+1] == target[i])
        {
            changed.push_back(make_pair(i, target[i]));
            i += 2;
        }
        else 
        {
            i +=1;
        
        }
        
        
    }

    return changed;
}