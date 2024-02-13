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
    vector<int>levelWiseTraversal(TreeNode* r, int level, vector<int>&v)
    {
        if(!r) return v;
        else if(level==0)
        {
            v.push_back(r->val);
        }
        else{
            levelWiseTraversal(r->left, level-1, v);
            levelWiseTraversal(r->right, level-1, v);

        }
        return v;
        
    }

    int heightOfTree(TreeNode* root)
    {
        if(!root) return 0;
        int lheight=heightOfTree(root->left);
        int rheight = heightOfTree(root->right); 
        return lheight>rheight?lheight+1:rheight+1;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        int h=heightOfTree(root);
        for(int i=0;i<=h;i++)
        {
            vector<int>v;
            levelWiseTraversal(root,i, v);
            if(!v.empty()) ans.push_back(v);
        }
        return ans;
    }
};