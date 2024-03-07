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
    vector<int> findMode(TreeNode* root) {
        queue<TreeNode*>qu;
        unordered_map<int, int>m;
        qu.push(root);
        while(!qu.empty())
        {
            TreeNode* temp=qu.front();
            qu.pop();
            m[temp->val]++;
            if(temp->left) qu.push(temp->left);
            if(temp->right) qu.push(temp->right);
        }
        vector<int>res;
        int maxfr=0;
        for(auto &x: m)
        {
            maxfr=max(maxfr, x.second);
        }
         for(auto &x: m)
        {
            if(x.second==maxfr)
            {
                res.push_back(x.first);
            }
        }
        
        return res;
    }
};