#include <unordered_set>
#include <queue>
#include <algorithm>
#include <utility>
#include <vector>
using namespace  std;

std::vector<int> findVertices(const Graph& graph, int start, int distance) 
{
    const std::map<int, std::set<int>> adjList = graph.getAdjList();
    unordered_set<int>visited;
    queue<pair<int, int>>checks;
    vector<int>result;
    
    checks.push({start, 0});
    visited.emplace(start);
    while(!checks.empty())
    {
        auto[node, dist] = checks.front();
        checks.pop();
        if(dist <= distance)
        {
            result.push_back(node);
        }
        if(adjList.find(node) == adjList.end())
        {
            continue;
        }
        for(int neighbour :adjList.at(node))
        {
            if(visited.find(neighbour) == visited.end())
            {
                visited.emplace(neighbour);
                checks.push({neighbour, dist + 1});
            }
        }
        
    }
    std::sort(result.begin(), result.end());
    return result;
}