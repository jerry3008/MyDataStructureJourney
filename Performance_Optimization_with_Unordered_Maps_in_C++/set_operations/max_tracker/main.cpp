#include <queue>
#include <vector>
#include <string>
#include <cstdlib>
#include <queue>
using namespace std;

std::vector<int> solution(const std::vector<std::pair<std::string, std::string>>& operations) {
    priority_queue<int>max_heap;
    vector<int> result;
    for (const auto& op : operations) 
    {
        if (op.first == "Add") 
        {
            int x = std::stoi(op.second);
            max_heap.push(x);
            
        }else if (op.first == "Max") 
        {
            result.push_back(max_heap.top());
        }else if (op.first =="RemoveMax") 
        {
            max_heap.pop();
        }
    }
    return result;
}