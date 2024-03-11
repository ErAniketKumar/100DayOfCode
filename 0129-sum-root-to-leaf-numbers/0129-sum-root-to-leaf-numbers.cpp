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
    int joinPathInstring(vector<int>helper)
    {
        string sum="";
        for(int i=0;i<helper.size();i++)
        {
            sum+=to_string(helper[i]); //concatinate all element (join in from of string)
        }

        return stoi(sum); //convevert string to integer
    }
    void findAllpathsum(TreeNode* root, vector<int>helper, vector<int>&ans)
    {
        if(!root) return;
        helper.push_back(root->val);
        if(!root->left && !root->right)
        {
            ans.push_back(joinPathInstring(helper)); //each path send to concatinate
        }
        else{
            findAllpathsum(root->left, helper, ans);
            findAllpathsum(root->right, helper, ans);
        }
    }
    int sumNumbers(TreeNode* root) {
        vector<int>ans;
        vector<int>helper;
        findAllpathsum(root, helper, ans);
        int sum=0;
        for(int i=0;i<ans.size();i++)
        {
            sum+=ans[i];
        }
        return sum;
    }
};