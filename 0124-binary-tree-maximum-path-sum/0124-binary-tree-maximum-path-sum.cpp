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
    int solveMaxPathSum(TreeNode* root, int& maxSum)
    {
        if(!root) return 0;
        int l=solveMaxPathSum(root->left,maxSum);
        int r=solveMaxPathSum(root->right, maxSum);

        int bothSideAndRootAregood=r+l+root->val;
        int oneSideGood=max(l,r)+root->val;
        int onlyRootgood=root->val;
        maxSum=max({maxSum, bothSideAndRootAregood,oneSideGood,onlyRootgood});
        return max(oneSideGood,onlyRootgood);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum=INT_MIN;
        solveMaxPathSum(root, maxSum);
        return maxSum;
    }
};