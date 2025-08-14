Multiply Large Integer Strings
Task

Implement a C++ function that multiplies two non-negative integers given as strings (num1, num2, up to 500 digits each) without converting to integers. Use digit-by-digit multiplication with carries (grade-school method), and return the product as a string.

Constraints

num1, num2: strings of digits only, length 1…500

No leading +/-. Leading zeros may appear (handle them).

Return "0" if either input is "0" (after trimming).

Do not cast to numeric types; perform manual digit multiplication and carry handling.

Examples

num1 = "123", num2 = "456" → "56088"

num1 = "0", num2 = "99999" → "0"

num1 = "00012", num2 = "0034" → "408"