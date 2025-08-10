#include <algorithm>
#include <cstddef>
#include <vector>
#include <string>
using namespace std;
std::vector<std::string> solution(const std::vector<std::string>& sentences, const std::vector<std::string>& words) 
{
    vector<string>result;
   for (int i = 0; i < sentences.size(); ++i) 
   {
        int current_pos = 0;
        std::string capitalized_word = words[i];
        capitalized_word[0] = toupper(capitalized_word[0]);
        std::string new_sentence;
        while (true) 
        { 
            size_t pos_lower = sentences[i].find(words[i], current_pos);
            size_t pos_upper = sentences[i].find(capitalized_word, current_pos);
            
            if (pos_lower == std::string::npos && pos_upper == std::string::npos) break;
            size_t match_pos;
            bool is_cap = false;
            if (pos_lower != std::string::npos && (pos_upper == std::string::npos || pos_lower < pos_upper)) 
            {
                match_pos = pos_lower;
            } else 
            {
                match_pos = pos_upper;
                is_cap = true;
            }
            new_sentence += sentences[i].substr(current_pos, match_pos - current_pos);
            std::string reversed = words[i];
            std::reverse(reversed.begin(), reversed.end());
            if (is_cap) reversed[0] = toupper(reversed[0]);
            new_sentence += reversed;
            current_pos = match_pos + words[i].size();
        }
        new_sentence += sentences[i].substr(current_pos);
        result.push_back(new_sentence);
        // Use a while loop inside to find/replace all occurrences
    }
    return result; // Placeholder for the result
}