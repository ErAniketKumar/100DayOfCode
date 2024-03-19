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
    void allNodeVal(TreeNode* root, vector<int>&v)
    {
        if(root)
        {
            allNodeVal(root->left, v);
            v.push_back(root->val);
            allNodeVal(root->right, v);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root)
        return false;
        vector<int>v;
        allNodeVal(root,v);
        unordered_map<int, int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        for(int i=0;i<v.size();i++)
        {
            int sec=k-v[i];
            if(m.find(sec)!=m.end() && sec!=v[i])
            return true;
        }
        return false;
    }
};