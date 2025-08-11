#include "solution.hpp"
using namespace std;
std::vector<std::pair<int, std::string>> stringSearch(const std::vector<std::pair<int, std::string>> &sourceArray, const std::vector<std::pair<int, std::string>> &searchArray) {
    std::vector<std::pair<int, std::string>> result;
    for(const auto & elem1 : sourceArray)
    {
        for(const auto& elem2 : searchArray)
        {
            size_t start_pos = elem2.second.find(elem1.second);  
            if(start_pos != string::npos && elem1.first <= elem2.first) 
            {
                result.push_back(elem1);
                break;
            }
        }
    }
    return result;
}