#include <string>
#include <unordered_map>
#include <utility>
#include <sstream>
#include <unordered_set>
#include <algorithm>
#include <unordered_map>

std::pair<char, int> solution(const std::string& s) {
    std::unordered_map<char, int> char_count;
    std::istringstream stream(s);
    std::string word;
    std::unordered_set<std::string> unique_words;
    while (stream >> word) 
    {
        if (unique_words.find(word) != unique_words.end()) 
        {
            continue; // Skip if already seen
        }
        unique_words.insert(word); // Mark as seen
        std::unordered_set<char> unique;
        for(char c : word)
        {
            unique.insert(c);
        }
        for(const auto & elem : unique)
        {
            char_count[elem]++;
        }
            
        
    
    }
    
    
    char best_char = '\0';
    int max_count = -1;
    for(const auto & charloop : char_count)
    {
        char c = charloop.first;
        int count = charloop.second;
        if (count > max_count || (count == max_count && s.find(c) < s.find(best_char))) 
        {
            best_char = c;
            max_count = count;
        }
    }
    
    
    
    return {best_char, max_count};
    
}