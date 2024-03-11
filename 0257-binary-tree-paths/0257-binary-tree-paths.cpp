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
    string extract(string s)
    {
        string res="";
        for(int i=0;i<s.size()-2;i++)
        {
            res+=s[i];
        }
        return res;
    }
    void Allpath(TreeNode* root, vector<string>&paths, string s)
    {
        if(!root) return;
        s+=to_string(root->val);
        s+="->";
        if(!root->left && !root->right)
        {
            string res=extract(s);
            paths.push_back(res);
        }
        Allpath(root->left,paths,s);
        Allpath(root->right,paths,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>paths;
        string s="";
        Allpath(root, paths,s);
        return paths;
    }
};