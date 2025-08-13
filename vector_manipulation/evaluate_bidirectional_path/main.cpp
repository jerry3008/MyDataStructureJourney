#include <cstdlib>
#include <vector>
#include <utility>

std::pair<int, int> evaluatePath(const std::vector<int>& numbers) 
{
    int direction = 1;
    int moves = 0;
    int direction_crossed = 0;
    int index = 0;
    int next_index;
    while(index < numbers.size())
    {
        if(numbers[index] == 0)break;
        if(direction == 1)
        {
    
            next_index  = index + numbers[index];  
        }else 
        {
            if(numbers[index] > 0) next_index = index - numbers[index];
            if (numbers[index] < 0) next_index = index + abs(numbers[index]);
        }
        if(next_index < 0 || next_index >= numbers.size())
        {
            direction *= -1;
            direction_crossed++;
            if(direction_crossed == 2)break;
            continue;
        }
        index = next_index;
        moves++;
    }
    
    return {index, moves}; // Placeholder return
}