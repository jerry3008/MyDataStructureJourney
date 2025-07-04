#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void solution(const std::vector<int>& numbers, std::vector<int>& result) 
{
    priority_queue<int, vector<int>, greater<int>>minheap;
    priority_queue<int>maxheap;
    for(int i = 0; i < numbers.size(); ++i)
    {
        int element = numbers[i];
        if(!maxheap.empty() && element < maxheap.top())
        {
            maxheap.push(element);
        }else{
            minheap.push(element);
        }
        int k = (i + 1) / 3;
        while(maxheap.size() > k)
        {
            minheap.push(maxheap.top());
            maxheap.pop();
            
        }
        while (maxheap.size() < k)
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
            
        result.push_back(minheap.top());
        
    }
        
        

}