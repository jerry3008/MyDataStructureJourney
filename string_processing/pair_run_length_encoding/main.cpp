#include <string>
using namespace std;

std::string solution(const std::string &s) 
{
   string groups;
   int n = s.size();
   string same_string = "\0";
   int count ;
   for(int i = 0; i < n; i+=2)
   {
        std:: string pair = s.substr(i, 2);
        if(same_string == "\0")
        {
            same_string = pair;
            count = 1;
        }else 
        {
            if (pair == same_string) 
            {
                count++;
            }else 
            {
                groups += same_string + std::to_string(count);
                same_string = pair;
                count = 1 ;
            }
        }
   }
   if(same_string != "\0")
   {
        groups += same_string + std::to_string(count);
   }
    return groups;
}