# Find Second Smallest Node in Binary Tree

## Problem
You are given a binary tree where each node contains an integer value. Your task is to write a C++ function that returns the **second smallest value** in the tree.

If no such second smallest value exists (i.e., all values are the same or the tree has only one node), return `-1`.

## Constraints
- Time Complexity: **O(n)**, where n is the number of nodes.
- Space Complexity: **O(1)** additional space (excluding recursion stack).
- You are **not allowed to use sorting** or any built-in sorting function.
- Use a **binary tree traversal** (DFS or BFS) to solve this.

## Example
Given the tree:

  2
 / \
2   5
   / \
  5   7

The function should return `5` as the second smallest value.

## Edge Case
If the tree is:

1
/
1 1

The function should return `-1` because there's no second distinct smallest value.