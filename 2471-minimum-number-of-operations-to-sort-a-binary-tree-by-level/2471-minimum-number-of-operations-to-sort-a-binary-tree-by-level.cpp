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
    int countSwap(vector<int>v)
    {
        int count=0;
        int i,j,mini;
        for(i=0;i<v.size()-1;i++)
        {
            mini=i;
            for(j=i+1;j<v.size();j++)
            {
                if(v[j]<v[mini])
                {
                    mini=j;
                }
            }
            if(i!=mini)
            {
                swap(v[i], v[mini]);
                count++;
            }
        }
        return count;
    }
    int minimumOperations(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*>qu;
        qu.push(root);
        int swap=0;
        while(!qu.empty())
        {
            int n=qu.size();
            vector<int>helper;
            while(n--)
            {
                TreeNode* temp=qu.front(); qu.pop();
                helper.push_back(temp->val);
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            swap+=countSwap(helper);
        }
        return swap;
    }
};