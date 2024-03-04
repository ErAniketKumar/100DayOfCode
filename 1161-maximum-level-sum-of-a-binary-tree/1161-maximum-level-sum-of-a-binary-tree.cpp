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
    int maxSumlevel(vector<int>&v)
    {
        int maxsum=INT_MIN;
        int index=-1;
        for(int i=0;i<v.size();i++)
        {
            if(maxsum<v[i])
            {
                maxsum=v[i];
                index=i;
            }
        }
        return index+1;
    }
    int maxLevelSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>qu;
        vector<int>res;
        qu.push(root);
        int level=0;
        while(!qu.empty())
        {
            int levelSum=0;
            int n=qu.size();
            while(n--)
            {
                TreeNode* temp=qu.front();
                qu.pop();
                levelSum+=temp->val;
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            level++;
            res.push_back(levelSum);
        } 
        return maxSumlevel(res);
    }
};