#include "solution.hpp"
#include <stack>

int min_removals_to_balance(const std::string &brackets) 
{
    std::stack<char>open_bracket;
    int count = 0;
    for(char c : brackets)
    {
        if(c == '(')
        {
            open_bracket.push(c);
            
        }
        else if (c == ')' && !open_bracket.empty()) 
        {
            open_bracket.pop();   
        }
        else if (c ==')')
        {
            count++;
        }
    }
    count += open_bracket.size();
    return count;
}

int main() {
    std::string invalid_parentheses = "()))(()";
    int removals_needed = min_removals_to_balance(invalid_parentheses);
    std::cout << "Removals needed: " << removals_needed << std::endl; // Expected output: 3
    return 0;
}