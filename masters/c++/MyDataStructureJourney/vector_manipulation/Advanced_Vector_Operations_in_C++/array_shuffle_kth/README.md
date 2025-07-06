# Shuffle Every K-th Element to the End

This C++ solution reorders a vector of integers by moving every `k`-th element to the end of the list.

## Example

Input:
nums = {1, 2, 3, 4, 5, 6, 7, 8}
k = 3

Output:
{1, 2, 4, 5, 7, 8, 3, 6}

## Approach

- Iterate through the list
- Collect every `k`-th element separately
- Append those at the end of the main list

## Time Complexity

- O(n) where `n` is the number of elements in the input list