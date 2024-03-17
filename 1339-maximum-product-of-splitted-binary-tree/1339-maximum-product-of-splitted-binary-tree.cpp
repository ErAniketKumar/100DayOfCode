class Solution {
public:
    long long totalSum = 0;
    long long maxPd = LLONG_MIN;
    const int MOD = 1e9 + 7;

    long long findSubTreeSum(TreeNode* root) {
        if (!root) return 0;
        long long leftSum = findSubTreeSum(root->left);
        long long rightSum = findSubTreeSum(root->right);
        long long subtreeSum = root->val + leftSum + rightSum;
        maxPd = max(maxPd, (totalSum - subtreeSum) * subtreeSum);
        return subtreeSum;
    }

    void calculateTotalSum(TreeNode* root) {
        if (!root) return;
        totalSum += root->val;
        calculateTotalSum(root->left);
        calculateTotalSum(root->right);
    }

    int maxProduct(TreeNode* root) {
        if (!root) return 0;
        calculateTotalSum(root);
        findSubTreeSum(root);
        return static_cast<int>(maxPd % MOD);
    }
};
