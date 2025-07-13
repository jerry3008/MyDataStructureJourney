void findSecondMin(TreeNode* node, int& min1, int& min2)
{
    if(!node) return;
    if (node->val < min1)
    {
        min2 = min1;
        min1 = node->val;
    }else if (node->val > min1 && node->val < min2)
    {
        min2 = node->val;
    }
    findSecondMin(node->left, min1, min2);
    findSecondMin(node->right, min1, min2);
} 
    
int secondMin(TreeNode* root) 
{
    int min1 = std::numeric_limits<int>::max();
    int min2 = std::numeric_limits<int>::max();
    
    findSecondMin(root, min1, min2);
    
    if (min2 == std::numeric_limits<int>::max()) return -1;
    return min2;
}