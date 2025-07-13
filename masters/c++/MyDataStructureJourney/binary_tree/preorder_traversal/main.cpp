#include <vector>

using namespace std;

std::vector<int> preorderTraversal(TreeNode* root) 
{
    if(root == nullptr)
    {
        return {};
    }
    vector<int>result;
    vector<int> left = preorderTraversal(root -> left);
    vector<int> right = preorderTraversal(root -> right);
    
    result.push_back(root -> val);
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());
    
    
    return result;
}