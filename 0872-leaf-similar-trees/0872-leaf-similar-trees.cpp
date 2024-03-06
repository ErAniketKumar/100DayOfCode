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
    bool checkSameOrNot(vector<int>v1, vector<int>v2)
    {
        if(v1.size()!=v2.size()) return false;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]==v2[i])
            {

            }
            else return false;
        }
        return true;
    }
    void findLeaf(TreeNode* root, vector<int>&v)
    {
        if(!root) return;
        if(!root->left && !root->right)
        {
            v.push_back(root->val);
        }
        findLeaf(root->left, v);
        findLeaf(root->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>leaf1, leaf2;
        findLeaf(root1, leaf1);
        findLeaf(root2, leaf2);
        return checkSameOrNot(leaf1,leaf2);
    }
};