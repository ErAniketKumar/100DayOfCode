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
    int minDiffInBST(TreeNode* root) {
        int diff=INT_MAX;
        if(!root) return diff;
        queue<TreeNode* >qu;
        qu.push(root);
        int curr=root->val;
        int prev=INT_MAX;
        vector<int>v;
        while(!qu.empty())
        {
            TreeNode* temp=qu.front(); qu.pop();
            v.push_back(temp->val);
            if(temp->left) qu.push(temp->left);
            if(temp->right) qu.push(temp->right);
        }
        sort(v.begin(), v.end());
        for(int i=1;i<v.size();i++)
        {
            diff=min(abs(v[i]-v[i-1]),diff);
        }
        return diff;
    }
};