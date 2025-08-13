#include <vector>
using namespace std;

vector<int> solution(const vector<int> &numbers, int obstacle) 
{
    vector<int>result;
    
    for(int i = 0; i< numbers.size(); ++i)
    {
        if(numbers[i] == obstacle)
        {
            result.push_back(-1);
            continue;
        }
        int steps = 0; 
        int position = i;
        bool hit = false;
        while(position < numbers.size())
        {
            if(numbers[position] == obstacle)
            {
                hit = true;
                break;
            }
            position += numbers[position];
            steps++;
        }
        if(hit)result.push_back(-1);
        else
        result.push_back(steps);
    }
    return result;
}