# Two Sum with Earliest Right Element

## Problem Statement

You are given a list of `n` integers and a target integer. Your task is to find **a pair of numbers whose sum equals the target**.

If multiple valid pairs exist, **return the one with the smaller index of the last element** (i.e., prioritize the pair where the second element appears earliest in the array).

Return the pair as a list of two integers. If no such pair exists, return an **empty list**.

---

## Function Signature

```cpp
std::vector<int> findTwoSumWithEarliestRight(const std::vector<int>& arr, int target);
