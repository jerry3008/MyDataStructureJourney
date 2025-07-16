#include <queue>
#include <set>

using namespace std;
int minDistance(Graph& graph, int start, int destination) 
{
    const std::map<int, std::set<int>> adjList = graph.getAdjList();
    
    set<int>numb;
    queue<pair<int, int>>check;
    
    check.push({start, 0});
    numb.insert(start);
    
    while(!check.empty())
    {
        auto [node, dist] = check.front();
        check.pop();
        if (node == destination) 
        {
            return dist;
        }
        if (adjList.find(node) == adjList.end()) 
        {
            continue;
        }
        for (int neighbor : adjList.at(node)) 
        {
            if (numb.find(neighbor) == numb.end()) 
            {
                numb.insert(neighbor);
                check.push({neighbor, dist + 1});
            }
        }
    }
     
    
    
    return -1;
}