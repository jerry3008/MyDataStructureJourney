#include <cctype>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;
std::string solution(const std::string &sentence) 
{
    stringstream ss(sentence);
    string words;
    string result = "";
    while(getline(ss, words, ' '))
    {
        unordered_map<char, int>count_char;
        if(words.size() % 2 == 1)
        {
            for(const auto & elem : words)
            {
                count_char[tolower(elem)]++;
            }
            int max_count = 0;
            char max_char = '\0';
            for (const auto& elem : words) 
            {
                char lower_elem = tolower(elem);
                if(count_char[lower_elem] > max_count)
                {
                    max_count = count_char[lower_elem];
                    max_char = lower_elem;
                } 
            }
            result += max_char; 
        }  
    }
    return result;
}