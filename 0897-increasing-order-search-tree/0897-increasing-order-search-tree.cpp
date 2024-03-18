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
  

    void valuesFind(TreeNode* root, vector<int>&v)
    {
        if(root)
        {
            valuesFind(root->left,v);
            v.push_back(root->val);
            valuesFind(root->right,v);
        }
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return nullptr;
        vector<int>v;
        valuesFind(root, v);
        TreeNode* new_root=nullptr;
        // sort(v.begin(), v.end());
        if(!new_root)
        {
            new_root=new TreeNode(v[0]);
        }
        TreeNode* curr=new_root;
        for(int i=1;i<v.size();i++)
        {
           curr->right=new TreeNode(v[i]);
           curr=curr->right;
        }
        root=new_root;
        return root;
    }
};