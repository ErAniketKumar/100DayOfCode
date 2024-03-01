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
    int findSecondMinimumValue(TreeNode* root) {
        queue<TreeNode*>qu;
        qu.push(root);
        set<int>s;
        while(!qu.empty())
        {
            TreeNode* temp=qu.front();
            qu.pop();
            s.insert(temp->val);
            if(temp->left){
                qu.push(temp->left);
            }
            if(temp->right)
            {
                qu.push(temp->right);
            }
        }
        if(s.size()==1) return -1;
        else{
            int min=0;
            int i=0;
            for(auto &x: s)
            {
                min=x;
                i++;
                if(i==2) break;
            }
            return min;
        }

    }
};