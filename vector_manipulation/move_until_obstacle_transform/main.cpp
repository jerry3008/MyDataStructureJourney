#include <vector>
using namespace std;

std::vector<int> solution(const std::vector<int>& numbers) 
{
    vector<int>result;
    for(int i = 0; i < numbers.size(); ++i)
    {
        if(numbers[i] < 0)
        {
            result.push_back(-1);
        }
        else
        {
            bool found = false;
            for(int j = i+ 1; j <= i + numbers[i] && j < numbers.size(); ++j)
            {
                if(numbers[j] < 0)
                {
                    result.push_back(j);
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                result.push_back(numbers[i]);
                
            }
        }
    }
    return result;
 
    
}