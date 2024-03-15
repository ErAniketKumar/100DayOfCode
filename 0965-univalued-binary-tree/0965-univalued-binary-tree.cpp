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
    bool treeTraverse(TreeNode* root, bool &flag,int val)
    {
        if(!root) return false;
        treeTraverse(root->left, flag,val);
        if(root->val!=val) flag=false;
        treeTraverse(root->right,flag, val);
        return flag;
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root) return false;
        int val=root->val;
        bool flag=true;
        return treeTraverse(root,flag,val);
        
        
    }
};