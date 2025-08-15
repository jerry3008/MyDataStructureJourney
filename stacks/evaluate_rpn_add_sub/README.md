Evaluate Reverse Polish Notation (RPN) — Addition & Subtraction Only
Task

Implement a C++ function that evaluates an expression in Reverse Polish Notation (postfix).

Operands appear before the operator.

Only the operators + and - are supported.

Input will be given as a std::vector<std::string> where each string is either:

An integer (possibly negative), or

The operator "+" or "-".

Rules

Evaluation is left to right in the order given.

When an operator is encountered:

Pop the two most recent numbers from the stack.

Apply the operator.

Push the result back onto the stack.

At the end, the stack contains exactly one number — the result.

Example

Input:

{"1", "2", "+", "4", "-"}


Step-by-step:

Push 1

Push 2

Encounter + → Pop 2 and 1 → 1 + 2 = 3 → Push 3

Push 4

Encounter - → Pop 4 and 3 → 3 - 4 = -1 → Push -1

Output:

-1

Constraints

Vector length: 1 ≤ n ≤ 10^4

Each integer fits within a 32-bit signed integer range.

Expression is valid and will never cause division by zero or empty stack pops.