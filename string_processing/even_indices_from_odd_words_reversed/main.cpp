#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

std::string solution(const std::string& sentence) 
{
    stringstream ss(sentence);
    string words;
    string result =  "";
    
    while(getline(ss, words, ' '))
    {
        if(words.size() % 2 != 0)
        {
            for(int i = 0; i < words.size(); i +=2)
            {
                result += words[i];
            }
        }
    }
   std::reverse(result.begin(), result.end());
    return result;  // Placeholder return
}