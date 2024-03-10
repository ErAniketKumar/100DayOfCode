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
    int arraysum(vector<int>v)
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        return sum;
    }
    void checkPath(TreeNode* root, int targetSum, vector<int>v, unordered_map<int, int>&m)
    {
        if(!root) return;
        v.push_back(root->val);
        if(!root->left && !root->right)
        {
            if(!v.empty())
            m.insert({arraysum(v),1});
        }
        checkPath(root->left, targetSum, v,m);
        checkPath(root->right, targetSum,v,m);
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {

      vector<int>v;
      unordered_map<int, int>m;
      checkPath(root, targetSum, v,m);
      if(m.find(targetSum)!=m.end()) return true;
      return false;
    }
};