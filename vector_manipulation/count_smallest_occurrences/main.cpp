using namespace std;
#include <vector>
#include <iostream>
#include <climits>

int countSmallest(const std::vector<int>& numbers) 
{
    int smallest = INT_MAX;
    int max_count = 0;
    if(numbers.empty())
    {
        return 0;
    }
    for(int i = 0; i < numbers.size(); ++i)
    {
        if(numbers[i] < smallest)
        {
            smallest = numbers[i];
            max_count = 1;
        } else if(numbers[i] == smallest)
        {
            max_count++;
        }
        
        
    }
    return max_count;
}