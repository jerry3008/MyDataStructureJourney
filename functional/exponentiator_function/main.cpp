#include <iostream>
#include <functional>
#include <cmath>

// TODO: Implement the exponentiator function
// It should accept a double exponent and return a function that raises its input to that power
std::function<double(double)> exponentiator(double exponent)
{
    return [exponent](double a)
    {
        return pow(a, exponent);
    };
}

int main() {
    // TODO: Create a function exp3 using exponentiator that cubes the input
    // Use exp3 to compute 5 cubed and print the result
    auto exp3 = exponentiator(3);
    std::cout << "5 cubed: " << exp3(5) << std::endl;
    
    // TODO: Create a function exp2 using exponentiator that squares the input
    // Use exp2 to compute 8 squared and print the result
    auto exp2 = exponentiator(2);
    std::cout << "8 squared: " << exp2(8) << std::endl;

    return 0;
}