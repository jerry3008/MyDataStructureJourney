#include <string>
#include <sstream>

using namespace std;

std::string solution(const std::string& sentence, char c) 
{
    stringstream ss(sentence);
    string words;
    string result = "";
    while(getline(ss, words, ' '))
    {
        if(words.size() % 2 == 0)
        {
            string mid = words.substr(words.size() / 2, words.size() / 2);
            for(int i = 0; i< mid.size(); ++i)
            {
                if (mid[i] < c)
                {
                    result += mid[i];
                }
            }
            
        }
    }
    return result;
}