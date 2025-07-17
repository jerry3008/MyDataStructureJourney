# Longest Substring with At Most K Distinct Characters

## Problem Statement

You are given:
- A string `s` consisting of **alphanumeric characters** (`A-Z`, `a-z`, `0-9`), with a maximum length of `100,000`.
- An integer `K` (`1 ≤ K ≤ 100,000`)

### Objective

Return the **length** of the longest contiguous substring in `s` that contains **at most `K` distinct characters**.

If there are multiple substrings of the same length, return the length of the **first one**.

---

## Function Signature

```cpp
int longestSubstringWithKDistinct(const std::string& s, int K);
