# Delete K-th Min and Find 3rd Minimum

## Problem

You are given a list of integers and a series of queries. Two query types:
- `"delete", k` – remove the k-th minimum number (1-based)
- `"find", 0` – return the 3rd smallest element, or -1 if it doesn’t exist

## Constraints

- 1 ≤ data.size() ≤ 1,000,000
- 1 ≤ queries.size() ≤ 1,000,000
- All integers are ≤ 100 and unique

## Example

Input:
```cpp
data = {1,2,3,4,5,6,7,8,9,10}
queries = { {"delete", 1}, {"find", 0}, {"delete", 2}, {"find", 0} }
