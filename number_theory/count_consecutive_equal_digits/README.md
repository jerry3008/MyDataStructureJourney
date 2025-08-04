# Count Consecutive Equal Digits in a Number

## Problem
Given a positive integer `n` (1 ≤ n ≤ 10⁸), write a function that returns the number of **groups of consecutive equal digits**.

- Do not convert `n` into a string or array.
- Work only with integers using mathematical operations.

## Example
Input: 113224
Output: 2 // groups: 11, 22

Input: 444
Output: 2 // groups: 44, 44


## Approach
Use modulo and division to process digits from the least significant to the most significant, tracking previous di