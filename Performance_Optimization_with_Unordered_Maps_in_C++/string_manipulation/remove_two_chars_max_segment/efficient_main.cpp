#include <string>
#include <vector>
#include <utility>

std::vector<int> solution(const std::string& S, const std::vector<std::pair<char, char>>& Q) {
    std::vector<int>result;
    int precal[26][26];
    for (int i = 0; i < 26; ++i)
    {
        for(int j = 0; j < 26; ++j)
        {
            char c1 =(char)(i +  'a');
            char c2 =(char)(j + 'a');
            int maxlength = 0;
            int currenthlength = 0;
            for(char c : S)
            {
                if(c == c1 || c == c2)
                {
                    currenthlength = 0;
                    
                }else 
                {
                    currenthlength++;
                    maxlength = std::max(maxlength , currenthlength);
                }
            }
            
            precal[i][j] = maxlength;
        }
    }
    
    for(const auto & q : Q )
    {
        result.push_back(precal[q.first -'a'][q.second -'a']);
    }
    
    // TODO: implement the solution here
    return result;
}