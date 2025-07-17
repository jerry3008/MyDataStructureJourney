# Binary Tree Postorder Traversal (Recursive)

Implement a recursive function `std::vector<int> postorderTraversal(TreeNode* root)` that performs a postorder traversal (left → right → root) of a binary tree.

## Example:
Given the tree:
        1
       / \
      4   3
     / \ / \
    6  7 8  2

Function call: `postorderTraversal(root)`  
Expected output: `{6, 7, 4, 8, 2, 3, 1}`

## Notes:
- Return an empty vector if the tree is empty.
- Use recursion.
