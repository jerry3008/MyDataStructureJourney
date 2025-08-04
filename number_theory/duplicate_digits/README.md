# Duplicate Digits in Integer

## Problem
Given a non-negative integer `n` (where `n ≤ 10⁴`), implement a function to return an integer formed by **duplicating every digit** of `n`.

**Constraints:**
- Do **not** convert the number to a string.
- Use only integer operations (e.g., loops, arithmetic).
- Result must maintain digit order.

## Example
Input: 1234
Output: 11223344

Input: 7
Output: 77

## Approach
Use modulo and division to extract digits, store them in reverse, then reconstruct the new number by duplicating each digit in order.
