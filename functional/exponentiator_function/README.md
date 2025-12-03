# Exponentiator Function (C++)

This task focuses on returning functions from functions using C++ lambda expressions and `std::function`.  
The goal is to build an exponentiator function that generates callable functions which raise their input to a predetermined exponent.

---

## Objective

Implement a function:

```cpp
std::function<double(double)> exponentiator(int exponent);
This function should:

Accept an integer exponent

Return a lambda that takes a double input

The returned lambda must compute and return std::pow(input, exponent)

Requirements

Use a lambda expression to capture the exponent.

Return a std::function<double(double)>.

Use std::pow from <cmath> to perform exponentiation.

Follow the TODO comments in the starter code.

Example Usage
auto square = exponentiator(2);
auto cube = exponentiator(3);

double result1 = square(5);  // 25
double result2 = cube(4);    // 64

Expected Behavior
Function Returned By	Input	Output
exponentiator(2)	6	36
exponentiator(3)	2	8
exponentiator(4)	3	81

The returned function must correctly store the exponent and use it for all future calls.

Build and Run
g++ -std=c++17 functional/exponentiator_function/main.cpp -o exponentiator
./exponentiator
