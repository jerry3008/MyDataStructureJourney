# Binary Tree Preorder Traversal (Recursive)

This task requires implementing the preorder traversal of a binary tree using recursion.

## Definition
In preorder traversal, each node is processed before its child subtrees.  
Order of traversal: **Root → Left → Right**

## Example
Given the tree:
        1
      /   \
     2     3
    / \
   4   5

Calling `preorderTraversal(root)` should return: `{1, 2, 4, 5, 3}`

## Notes
- If the tree is empty, return an empty vector.
- Implement using a recursive approach.
