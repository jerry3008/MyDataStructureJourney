# Reverse Binary Tree

## Problem
You are given a binary tree. Your task is to write a C++ function to reverse the binary tree. Reversing a binary tree means **swapping the left and right children of every node** in the tree.

## Constraints
- Time complexity: **O(n)**, where n is the number of nodes.
- This must be done recursively or iteratively.
- The reversal should happen in-place, modifying the original tree.

## Example

### Input Tree:

  4
 / \
2   5
/
1 3


### Reversed Tree:
  4
 / \
5   2
   / \
  3   1
### In-Order Traversals:
- Original tree: `[1, 2, 3, 4, 5]`
- Reversed tree: `[5, 4, 3, 2, 1]`