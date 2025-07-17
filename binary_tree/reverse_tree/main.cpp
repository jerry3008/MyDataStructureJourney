
#include <utility>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>

TreeNode* reverseTree(TreeNode* root) {
    if (root == nullptr) return nullptr;
    std::swap(root->left, root->right);
    reverseTree(root->left);
    reverseTree(root->right);
    return root;
}