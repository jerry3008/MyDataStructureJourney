#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <unordered_set>

std::map<std::string, int> solution(const std::vector<std::string>& word_list) {
    std::unordered_map<std::string, int> lastseen;
    std::unordered_map<std::string, int>smallestdistance;
    for(int i = 0; i <word_list.size(); ++i)
    {
        const std::string& word = word_list[i];
        if(lastseen.find(word) != lastseen.end())
        {
            int distance = i - lastseen[word];
            if(smallestdistance.find(word) == smallestdistance.end() || distance < smallestdistance[word])
            {
                smallestdistance[word] = distance;
            }
        }
        lastseen[word] = i;
        
    }
    
    std::map<std::string, int> result(smallestdistance.begin(), smallestdistance.end());
    return result;
}