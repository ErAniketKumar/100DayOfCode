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
    vector<int> levelWiseAvg(TreeNode* root, int level, vector<int>&v)
    {
        if(!root) return v;
        else if(level==0)
        {
            v.push_back(root->val);
        }
        else{
            levelWiseAvg(root->left, level-1, v);
            levelWiseAvg(root->right, level-1, v);
        }
        return v;
       
    }
    int hightOfBt(TreeNode* root)
    {
        if(!root) return 0;
        int lheight=hightOfBt(root->left);
        int rheight=hightOfBt(root->right);
        return lheight>rheight?lheight+1: rheight+1;
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        int h=hightOfBt(root);
        for(int i=0;i<=h;i++)
        {
            vector<int>v;
            v=levelWiseAvg(root,i,v);
            if(!v.empty())
            {
                double sum=0;
                for(int i=0;i<v.size();i++)
                {
                    sum+=v[i];
                }
                ans.push_back((1.0*sum)/v.size());
            }
        }
        return ans;
    }
};