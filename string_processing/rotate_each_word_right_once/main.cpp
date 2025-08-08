#include <ostream>
#include <sstream>
#include <string>
using namespace  std;
#include <vector>
// TODO: Implement the solution here
std::string solution(std::string s) 
{
    
    istringstream ss(s);
    string words;
    vector<string> rotated; 
    while (ss >> words) 
    {
        rotated.push_back(words.back() + words.substr(0, words.size() - 1));
    }
    
    ostringstream join;
    join << rotated[0];
    
    for(int i = 1; i < rotated.size(); ++i)
    {
        join << " " << rotated[i];
    }
    return join.str();
}