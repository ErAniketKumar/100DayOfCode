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
    int dfssolve(TreeNode* root, int &count) {
        if(!root) return 0;
        int l=dfssolve(root->left, count);
        int r=dfssolve(root->right, count);
        count+=abs(l)+abs(r);
        return root->val+l+r-1;
    }
    int distributeCoins(TreeNode* root) {
        int count=0;
        dfssolve(root, count);
        return count;
    }
};