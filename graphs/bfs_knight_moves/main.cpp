#include "solution.hpp"
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int knightMoves(std::pair<int, int> start, std::pair<int, int> end) 
{
    queue<pair<pair<int, int>, int>> coords;
    coords.push({start, 0});
    vector<vector<bool>>visited(8,vector<bool>(8, false));
    if(start == end)
    {
        return 0;
    }
    
    int dx[8] = {-2, -1, 1, 2,2, 1, -1, -2};
    int dy[8] = {1,2, 2, 1, -1, -2, -2, -1};
    while(!coords.empty())
    {
        auto[position, dist] = coords.front();
        coords.pop();
        
        if(position == end)
        {
            return dist;
        }
        
        for(int i = 0; i < 8; ++i)
        {
            int newRow = position.first + dx[i];
            int newCol = position.second +dy[i];
            if(newRow >=0 && newRow < 8 && newCol >= 0 && newCol < 8 && !visited[newRow][newCol])
            {
                visited[newRow][newCol] = true;
                coords.push({{newRow, newCol}, dist + 1});
            }
        }
    }
    
    
    // TODO: implement the function
    return -1;
}