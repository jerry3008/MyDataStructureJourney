#include <vector>
#include <string>
#include <utility>
#include <queue>
using namespace std;

std::vector<int> solution(const std::vector<int>& data, const std::vector<std::pair<std::string, int>>& queries) {
    priority_queue<int, vector<int>, greater<int>>minheap(data.begin() , data.end());
    std::vector<int> output;
    for(const auto & q : queries)
    {
        if(q.first == "delete")
        {
            int k = q.second;
            vector<int> temp;
            for (int i = 0; i < k - 1; ++i) 
            {
                temp.push_back(minheap.top());
                minheap.pop();
            }if (!minheap.empty()) minheap.pop();
            
            for(int num : temp) minheap.push(num);
            
        }else if(q.first == "find")
        {
            int answer = -1;
            vector<int> temp;
            if (minheap.size() >= 3) 
            {
                
                for (int i = 0; i < 3; ++i)
                 
                {
                    temp.push_back(minheap.top());
                    minheap.pop();
                }
             answer = temp[2];
            }
            for(int num : temp) minheap.push(num);
            
            output.push_back(answer);
        }
            
    }
    
    // TODO: Implement this function
    return output;
}