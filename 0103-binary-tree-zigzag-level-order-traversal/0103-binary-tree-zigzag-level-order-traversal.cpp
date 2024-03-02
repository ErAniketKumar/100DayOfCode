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
    void levelwiseTraverse(TreeNode* root, int level, vector<int>&v)
    {
        if(!root) return;
        else if(level==0)
        {
            v.push_back(root->val);
        }
        else{
            levelwiseTraverse(root->left, level-1, v);
            levelwiseTraverse(root->right, level-1, v);
        }
    }
    int heightofBt(TreeNode* root)
    {
        if(!root) return 0;
        int lh=heightofBt(root->left);
        int rh=heightofBt(root->right);
        return 1+max(lh,rh);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        int h=heightofBt(root);
        for(int i=0;i<=h;i++)
        {
            vector<int>v;
            levelwiseTraverse(root, i, v);
            if(!v.empty())
            {
                ans.push_back(v);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            if(i%2!=0)
            {
                reverse(ans[i].begin(), ans[i].end());
            }
        }
        return ans;
    }
};