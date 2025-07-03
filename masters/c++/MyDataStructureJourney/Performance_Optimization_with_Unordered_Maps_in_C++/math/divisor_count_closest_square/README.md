# Divisor Count of Closest Perfect Square

## Problem Statement

Given an array of `n` integers, return a new array where each element is the number of **divisors** of the **closest perfect square** to that integer.

If a number is equally close to two perfect squares, choose the **smaller one**.

---

## Function Signature

```cpp
std::vector<int> countDivisorsOfClosestPerfectSquares(const std::vector<int>& arr);
