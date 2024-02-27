/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int lmaxDepth=maxDepth(root->left);
        int rmaxDepth=maxDepth(root->right);
        if(lmaxDepth > rmaxDepth)
        {
            return lmaxDepth+1;
        }
        else{
            return rmaxDepth+1;
        }
    }
};