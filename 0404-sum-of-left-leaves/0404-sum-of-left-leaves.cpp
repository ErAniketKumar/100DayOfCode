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
    int leftLeave(TreeNode* root, int &sum)
    {
        if(!root) return 0;
        if(root->left &&!root->left->left && !root->left->right)
        {
            sum+=root->left->val;
        }
        leftLeave(root->left,sum);
        leftLeave(root->right,sum);
        return sum;

    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int sum=0;
        sum=leftLeave(root,sum);
        return sum;
    }
};