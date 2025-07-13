#include <vector>
using namespace std;

std::vector<int> postorderTraversal(TreeNode* root) 
{
    if(root == nullptr)
    {
        return {};
    }
    vector<int>result;
    vector<int>left = postorderTraversal(root -> left);
    vector<int>right = postorderTraversal(root -> right);
    
    result.insert(result.end(), left.begin(), left.end());
    result.insert(result.end(), right.begin(), right.end());
    result.push_back(root -> val);
    
    return result; 
}