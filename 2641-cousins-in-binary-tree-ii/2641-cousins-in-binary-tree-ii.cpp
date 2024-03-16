// #include <iostream>
// #include <unordered_map>
// #include <queue>
// #include <vector>

// using namespace std;

// // Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        vector<int> levelSum;
        calculateLevelSum(root, levelSum);
        return updateTree(root, levelSum);
    }

private:
    void calculateLevelSum(TreeNode* root, vector<int>& levelSum) {
        queue<TreeNode*> qu; // Change: renamed Q to qu
        qu.push(root);
    
        while (!qu.empty()) {
            int size = qu.size(); // Change: size_t to int
            int sum = 0;
            for (int i = 0; i < size; i++) {
                TreeNode* temp = qu.front(); // Change: renamed curr to temp
                qu.pop();
                sum += temp->val;
                if (temp->left) qu.push(temp->left);
                if (temp->right) qu.push(temp->right);
            }
            levelSum.emplace_back(sum);
        }
    }

    TreeNode* updateTree(TreeNode* root, vector<int>& levelSum) {
        int level = 0;
        queue<TreeNode*> qu;
        qu.push(root);
    
        while (!qu.empty()) {
            int size = qu.size();
            for (int i = 0; i < size; i++) {
                TreeNode* temp = qu.front();
                qu.pop();
                int siblingSum = (temp->left ? temp->left->val : 0) + 
                                   (temp->right ? temp->right->val : 0);
                if (level == 0) temp->val = 0;
                if (temp->left) {
                    qu.push(temp->left);
                    temp->left->val = levelSum[level+1] - siblingSum;
                }
                if (temp->right) {
                    qu.push(temp->right);
                    temp->right->val = levelSum[level+1] - siblingSum;
                }
            }
            level++;
        }

        return root;
    }
};