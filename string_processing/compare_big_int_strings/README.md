Compare Large Integer Strings
Task
Implement a function that compares two non-negative integers represented as strings (num1, num2, up to 100 digits each) without converting to integers. Compare from the most significant digit to the least using string operations only.

Return:

1 if num1 > num2

-1 if num2 > num1

0 if equal

Constraints
num1, num2: strings of digits only, length 1…100

No leading +/-. Leading zeros may appear (handle them correctly).

Do not cast to numeric types; compare lengths (after trimming leading zeros) and digits lexicographically.

Examples
num1 = "12345", num2 = "1234" → 1

num1 = "1234", num2 = "12345" → -1

num1 = "12345", num2 = "12345" → 0

num1 = "000123", num2 = "123" → 0

num1 = "0010", num2 = "9" → 1