#include <string>
#include <vector>
#include <utility>
using namespace std;

std::vector<int> solution(const std::string& S, const std::vector<std::pair<char, char>>& Q) {
    vector<int>result;
    for(const auto & q : Q)
    {
        int max_length = 0;
        int currentLength = 0;
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == q.first || S[i] == q.second)
            {
                currentLength = 0;
            }else{
                currentLength +=1;
                max_length = max(max_length, currentLength);
            }
            
        }
        result.push_back(max_length);
        
    }
    // TODO: implement the solution here
    return result;
}