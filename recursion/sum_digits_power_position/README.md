# Sum of Digits Raised to Power of Their Positions

This program implements a recursive solution to compute the sum of digits in a number `n`, where each digit is raised to the power of its position from right to left (1-indexed).

## Problem Statement

Given a positive integer `n`, compute the following:

For example, if `n = 253`, then:

- 3 is in the 1st position → 3^1 = 3
- 5 is in the 2nd position → 5^2 = 25
- 2 is in the 3rd position → 2^3 = 8

Total Sum = 3 + 25 + 8 = 36

## Constraints

- Do not use loops.
- The solution must be recursive.
- You may use `std::pow()` from the `<cmath>` library.

## Example