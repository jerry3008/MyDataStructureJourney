#include "solution.hpp"
#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

void backtrack(const std::string& s, int index,  std::string& path, std::vector<std::string>& result)
{
    if(index == s.size())
    {
        result.push_back(path);
        return;
    }
    
    if(std::isalpha(s[index]))
    {
        path.push_back(std::tolower(s[index]));
        backtrack(s, index + 1, path, result);
        path.pop_back();
        
        path.push_back(std::toupper(s[index]));
        backtrack(s, index + 1, path, result);
        path.pop_back();
    }else{
        path.push_back(s[index]);
        backtrack(s, index + 1, path, result);
        path.pop_back();
    }
}
// TODO: implement the solution
std::vector<std::string> letterCaseCombos(const std::string &s) 
{
    std::vector<string>result;
    std::string path;
    backtrack(s, 0, path, result);
    return result;
}