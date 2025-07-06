#include <vector>
#include <algorithm> // For std::min and std::max

std::pair<int,int> minMaxDiagonal(const std::vector<std::vector<int>>& grid) 
{
    if (grid.empty() || grid[0].empty()) return {-1, -1};
    int n = grid.size();
    int min_val = grid[0][n-1];
    int max_val = grid[0][n-1];
    
    for(int i = 1; i < n; ++i)
    {
       min_val = std::min(min_val, grid[i][n-1-i]);
       max_val = std::max(max_val, grid[i][n-1-i]); 
    }
    // TODO: Implement your solution
    return {min_val, max_val};
}