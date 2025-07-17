#include <utility>
#include <vector>
#include <queue>
using namespace std;

int bfsMatrix(const std::vector<std::vector<int>>& mat, std::pair<int, int> start, std::pair<int, int> end) 
{
    queue<pair<pair<int, int>, int>>coord;
    vector<vector<bool>>visited(mat.size(), vector<bool>(mat[0].size(), false));
    
    int dy[] ={-1, 1,0,0};
    int dx[] ={0,0, -1, 1};
    
    
    coord.push({start, 0});
    visited[start.first][start.second] = true;
    while(!coord.empty())
    {
        auto node = coord.front();
        coord.pop();
        
        int row = node.first.first;
        int col = node.first.second;
        int dist = node.second;
        
        if(make_pair(row, col) == end)
        {
            return dist;
        }
        for(int k = 0; k < 4; ++k)
        {
            int newRow = row + dx[k];
            int newCol = col + dy[k];
            
            
            if(newRow >= 0 && newRow < mat.size() && newCol >= 0 && newCol < mat[0].size() && mat[newRow][newCol] == 1 && !visited[newRow][newCol])
            {
                coord.push({{newRow, newCol}, dist + 1});
                visited[newRow][newCol] = true;
            }
        }
        
    }
    
    return 0;
}