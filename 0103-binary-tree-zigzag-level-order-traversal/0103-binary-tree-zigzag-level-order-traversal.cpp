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
    void traverseLevelwise(TreeNode* root, vector<vector<int>>&res)
    {
        queue<TreeNode*>qu;
        int level=0;
        qu.push(root);
        while(!qu.empty())
        {
            vector<int>v;
            int n=qu.size();
            while(n--)
            {
                TreeNode* temp=qu.front(); qu.pop();
                v.push_back(temp->val);
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            if(level%2!=0 && !v.empty())
            {
                reverse(v.begin(), v.end());
                res.push_back(v);
            }
            else{
                res.push_back(v);
            }
            level++;
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        traverseLevelwise(root, res);
        return res;
    }
};