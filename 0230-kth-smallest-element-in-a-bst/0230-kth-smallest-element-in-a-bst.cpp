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
    int kthSmallest(TreeNode* root, int k) {
        queue<TreeNode*>qu;
        qu.push(root);
        set<int>s;
        while(!qu.empty())
        {
            TreeNode* temp=qu.front();
            qu.pop();
            s.insert(temp->val);
            if(temp->left)
            {
                qu.push(temp->left);
            }
            if(temp->right)
            {
                qu.push(temp->right);
            }
        }
        int i=0;
        int ele=-1;
        for(auto &x: s)
        {
            ele=x;
            i++;
            if(i==k) break;
        }
        return ele;
    }
};