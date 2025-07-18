#include "solution.hpp"
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void backtrack(const vector<string>& words, string path,  int index, vector<string>& result)
{
    if (index == words.size()) 
    {
        result.push_back(path);
        return;
    }
    for (const auto & ch : words[index]) 
    {
        backtrack(words,  path + ch, index + 1, result);
    }
}

std::vector<std::string> generateCombos(const std::vector<std::string>& words) 
{
    vector<string> result;
    std::string path;
    backtrack(words, "", 0, result);
    sort(result.begin(), result.end());
    return result;
}