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
    int heightofT(TreeNode* root)
    {
        if(!root) return 0;
        int lh=heightofT(root->left);
        int rh=heightofT(root->right);
        return 1+max(lh, rh);
    }
    int deepestLeavesSum(TreeNode* root) {
        int h=heightofT(root);
        queue<TreeNode*>qu;
        qu.push(root);
        int level=0;
        int sum=0;
        while(!qu.empty())
        {
            int n=qu.size();
            while(n--)
            {
                TreeNode* temp=qu.front(); qu.pop();
                if(level==h-1)
                {
                    sum+=temp->val;
                }
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            level++;
        }
        return sum;
    }
};