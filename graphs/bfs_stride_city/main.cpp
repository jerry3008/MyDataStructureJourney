#include <queue>
#include <unordered_set>
#include <utility>
using namespace std;




int shortestRoute(int distance, int stride_length, const std::vector<int>& obstacles) 
{
    queue<pair<int, int>>check;
    unordered_set<int>visited;
    unordered_set<int>obstacleset(obstacles.begin(), obstacles.end());
    

    check.push({0, 0});
    while(!check.empty())
    {
        auto[current_position, steps_taken] = check.front();
        check.pop();
        if(current_position == distance -1)
        {
            return steps_taken;
        }
        
        for(int stride = 1;  stride <= stride_length; ++stride)
        {
            int next_position = current_position + stride;
            if(next_position < distance && visited.find(next_position) == visited.end() && obstacleset.find(next_position)== obstacleset.end())
            {
                check.push({next_position, steps_taken + 1});
                visited.insert(next_position);
            }
        }
        
    }  
    return -1;
}