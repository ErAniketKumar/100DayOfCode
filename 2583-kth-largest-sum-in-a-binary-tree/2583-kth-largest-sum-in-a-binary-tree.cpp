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
    long long klargestSum(vector<long long>&v, int k)
    {
        sort(v.begin(), v.end());
        if(k>v.size()) return -1;
        return v[v.size()-k];
    }
    long long levelSum(vector<int>&v)
    {
        long long sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        return sum;
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root) return -1;
        queue<TreeNode*>qu;
        vector<int>helper;
        vector<long long>res;
        qu.push(root);
        int level=0;
        while(!qu.empty())
        {
            int n=qu.size();
            while(n--)
            {
                TreeNode* temp=qu.front();
                qu.pop();
                helper.push_back(temp->val);
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            level++;
            res.push_back(levelSum(helper));
            helper.clear();
        }
        return klargestSum(res,k);
    }
};