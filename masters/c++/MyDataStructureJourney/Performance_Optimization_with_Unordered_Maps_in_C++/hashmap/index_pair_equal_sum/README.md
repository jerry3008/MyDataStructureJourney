# Matching Index Pair with Equal Sum

## Problem Statement

You are given two arrays `arrA` and `arrB`, each containing `n` integers.

Find a pair of distinct indices `[i, j]` such that:

```cpp
arrA[i] + arrA[j] == arrB[i] + arrB[j]
std::vector<int> findMatchingPair(const std::vector<int>& arrA, const std::vector<int>& arrB);
