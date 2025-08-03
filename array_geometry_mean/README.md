## Problem: Array Opposite Geometric Mean

You are given an input array consisting of n integers ranging from 0 to 100, inclusive.

Your task is to return a new array of pairs. Each pair should consist of:
- the current element
- the geometric mean of the current element and its "opposite" element.

The "opposite" element is the one at the mirrored position from the end of the array.  
If the array has odd length, the middle element is its own opposite.

### Formula:
Geometric Mean of `a` and `b` = sqrt(a * b), rounded to 2 decimal places.

### Example:

Input:
[1, 2, 3, 4, 5]

Output:
[{1, 2.24}, {2, 2.83}, {3, 3.00}, {4, 2.83}, {5, 2.24}]

Expected Time Complexity: O(n)
