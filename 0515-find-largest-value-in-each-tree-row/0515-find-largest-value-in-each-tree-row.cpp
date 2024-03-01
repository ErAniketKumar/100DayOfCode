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
    void maxElementofEachElvel(TreeNode* root, int level, vector<int>&v)
    {
        if(!root) return;
        else if(level==0)
        {
            v.push_back(root->val);
        }
        else{
            maxElementofEachElvel(root->left, level-1,v);
            maxElementofEachElvel(root->right, level-1,v);
        }
        
        
    }
    int heightofBT(TreeNode* root)
    {
        if(!root) return 0;
        int lheight=heightofBT(root->left);
        int rheight=heightofBT(root->right);
        return lheight>rheight?lheight+1: rheight+1;
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        int h=heightofBT(root);
        for(int i=0;i<=h;i++)
        {
            vector<int>v;
            maxElementofEachElvel(root,i, v);
            if(!v.empty())
            {
                int maxi=*max_element(v.begin(), v.end());
                res.push_back(maxi);
            }
        }
        return res;
    }
};