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
    void inorderTraverse(TreeNode* root, vector<int>&v)
    {
        if(!root) return;
        if(root)
        {
            inorderTraverse(root->left,v);
            v.push_back(root->val);
            inorderTraverse(root->right,v);
        }
    }
    bool checkSortArr(vector<int>v)
    {
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1])
            {

            }
            else return false;
        }
        return true;
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        vector<int>ans;
        inorderTraverse(root, ans);
        return checkSortArr(ans);
    }
};