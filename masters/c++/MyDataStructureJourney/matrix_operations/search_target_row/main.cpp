#include <vector>
#include <iostream>

int findRow(const std::vector<std::vector<int>>& matrix, int target) 
{
    if(matrix.empty())
    {
        return{};
    }
    int row = 0;
    int rows = matrix.size();
    int col = matrix[0].size()-1;
    while ((row < rows && col >= 0)) 
    {
        if(matrix[row][col] == target)
        {
            return row;
        }else if (matrix[row][col] > target) 
        {
            col--;
             } else {
            row++; // move down
        }
    }
    
    // TODO: Implement your solution

    return -1;  
}