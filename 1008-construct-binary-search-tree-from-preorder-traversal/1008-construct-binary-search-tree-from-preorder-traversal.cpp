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
    TreeNode* construct(TreeNode* root, int data)
    {
        TreeNode* temp=new TreeNode(data);
        if(!root)
        {
            return temp;
        }
        if(root->val > data)
        {
            root->left=construct(root->left, data);
        }
        else{
            root->right=construct(root->right, data);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=nullptr;
        if(preorder.empty()) return nullptr;
       
        for(int i=0;i<preorder.size();i++)
        {
           root=construct(root, preorder[i]);
        }
        return root;
        
    }
};