# Find Target Row in Sorted Matrix

This C++ program determines the row index in which a target value exists within a matrix where each row and column is sorted in ascending order.

### Problem Description

You are given a matrix of integers where:
- Each row is sorted in ascending order.
- Each column is also sorted in ascending order.

You must find the **row index** that contains the target value. If the target does not exist in the matrix, return `-1`.

### Constraints

- Time complexity must be **O(n + m)**, where `n` is the number of rows and `m` is the number of columns.

### Example

Input:

```cpp
matrix = {
    {1, 4, 7, 11},
    {2, 5, 8, 12},
    {3, 6, 9, 16}
};
target = 9;
