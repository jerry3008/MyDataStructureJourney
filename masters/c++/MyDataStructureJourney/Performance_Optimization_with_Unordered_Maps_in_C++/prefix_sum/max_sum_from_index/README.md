# Maximum Cumulative Sum from Index Range (Constrained Kadane’s Algorithm)

## Problem Statement

You are given:
- An array of `n` integers (`1 ≤ n ≤ 1000`, values between `-1000` and `1000`)
- A list of up to `1,000,000` queries, where each query is a pair `(l, r)`

### Objective

For each query `(l, r)`, find the **maximum cumulative sum** of a subarray that:
- **Starts at index `l`**
- **Ends at index `m`, where `l ≤ m ≤ r`**

### Return

An array of results, where each element corresponds to the maximum sum for the respective query.

---

## Function Signature

```cpp
std::vector<int> solution(const std::vector<int>& arr,
                          const std::vector<std::pair<int, int>>& queries);
