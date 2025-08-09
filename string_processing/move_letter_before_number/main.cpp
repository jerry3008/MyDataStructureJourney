#include <cctype>
#include <string>
using namespace  std;
std::string solution(const std::string &input_string) 
{
    bool waiting_for_letter = false;
    string transformed;
    string num; 
    for(char c  : input_string)
    {
        if (isdigit(c)) 
        {
            num += c;
            waiting_for_letter = true; 

        }else if (waiting_for_letter == true && isalpha(c))
        {
            transformed += c;
            transformed += num;
            num = "";
            waiting_for_letter = false;
        }
        else if (waiting_for_letter == true && !isdigit(c))
        {
            continue;
        }
        else
        {
            transformed += c;
        } 
    }
    
    // TODO: implement your solution here
    return transformed;
}