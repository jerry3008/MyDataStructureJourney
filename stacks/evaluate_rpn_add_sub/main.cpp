#include "solution.hpp"
#include <cctype>
#include <sstream>
#include <string>

using namespace std;
int evaluate_reverse_polish_notation(const std::string &expression) 
{
    stringstream ss(expression);
    string words;
    std::stack<int> stack;
    while (getline(ss, words, ' ')) 
    {
        if (words == "+" || words == "-") 
        {
            int operand1 = stack.top(); stack.pop();
            int operand2 = stack.top(); stack.pop();
            int result = (words == "+") ? operand2 + operand1 : result = operand2 - operand1;
            stack.push(result);
        }else 
        {
            stack.push(std::stoi(words));
        }
    }
    return stack.top();
    
}


int main() {
    // The expression "1 2 + 4 -" is "(1 + 2) - 4"
    std::cout << evaluate_reverse_polish_notation("1 2 + 4 -") << std::endl; // Expected output: -1
    return 0;
}