#include <vector>
#include <utility>

std::vector<std::pair<int, int>> solution(const std::vector<int>& vectorA, const std::vector<int>& vectorB) 
{
    std::vector<std::pair<int, int>>result;
    for(const auto & elem1: vectorA)
    {
        for(const auto & elem2 : vectorB)
        {
            if(elem1 > elem2)
            {
                result.push_back({elem1, elem2});
            }
        }
    }
    return result;
   
}