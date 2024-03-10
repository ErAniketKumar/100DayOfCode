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
    int arrsum(vector<int>v)
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        return sum;
    }
    void pathSumEqualTarget(TreeNode* root, int target,vector<int>helper, vector<vector<int>>&ans)
    {
        if(!root) return;
        helper.push_back(root->val);
        if(!root->left && !root->right)
        {
            if(arrsum(helper)==target)
            {
                ans.push_back(helper);
            }
        }
        pathSumEqualTarget(root->left, target, helper, ans);
        pathSumEqualTarget(root->right, target, helper, ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>helper;
        pathSumEqualTarget(root,  targetSum, helper, ans);
        return ans;
    }
};