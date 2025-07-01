# Max Segment Length After Removing Two Characters

## Problem Statement

You are given:
- A string `S` of lowercase English letters (`1 ≤ len(S) ≤ 1000`)
- A list `Q` of up to `10⁵` queries, where each query is a pair of distinct lowercase characters (e.g., `('a', 'b')`)

### Objective

For each query `(c1, c2)`, remove **all occurrences** of `c1` and `c2` from `S`, then return the **length of the longest contiguous block** (substring) that remains.

---

## Function Signature

```cpp
std::vector<int> solution(const std::string& S, const std::vector<std::pair<char, char>>& Q);
