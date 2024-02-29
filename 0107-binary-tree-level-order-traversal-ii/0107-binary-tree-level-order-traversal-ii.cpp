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
    vector<int>levelWIseTraverse(TreeNode* root, int level, vector<int>&v)
    {
        if(!root) return v;
        else if(level==0)
        {
            v.push_back(root->val);
        }
        else{
            levelWIseTraverse(root->left, level-1, v);
            levelWIseTraverse(root->right, level-1, v);
        }
        return v;
    }
    int heightOfBt(TreeNode* root)
    {
        if(!root) return 0;
        int lheight=heightOfBt(root->left);
        int rheight=heightOfBt(root->right);
        return lheight>rheight?lheight+1:rheight+1;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int h=heightOfBt(root);

        vector<vector<int>>ans;
        for(int i=0;i<=h;i++)
        {
            vector<int>v;
            v=levelWIseTraverse(root, i, v);
            if(!v.empty())
            {
                ans.push_back(v);
            }
        }
        
       reverse(ans.begin(), ans.end());
       return ans;
    }
};