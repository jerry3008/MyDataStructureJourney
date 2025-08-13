Subtract Two Big Integer Strings
Task
Implement a C++ function that subtracts two non-negative decimal integers given as strings:

std::string subtractStrings(const std::string& num1, const std::string& num2);
num1 and num2 are strings of digits, length 1…500.

Guaranteed num1 >= num2 (result is not negative).

No integer conversion; do digit-by-digit subtraction with borrows.

Return the difference as a string without leading zeros (except return "0" if result is zero