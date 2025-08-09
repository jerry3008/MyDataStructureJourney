#include <string>
using namespace  std;
#include <vector>

int solution(const std::string& s) 
{
    string word;
    int sum = 0;
   for(char c : s)
   {
        if(isdigit(c))
        {
            word += c;
        }else 
        {
            if (!word.empty()) 
            {
                sum += std::stoi(word);
                word = "";
            
            }
        
        }
   }
   if(!word.empty())
   {
        sum += std::stoi(word);
   }
   return sum ;
}