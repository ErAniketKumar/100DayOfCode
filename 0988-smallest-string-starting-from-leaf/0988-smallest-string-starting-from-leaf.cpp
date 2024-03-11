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
    string decodeArr(vector<int>v)
    {
        string s="";
        for(int i=0;i<v.size();i++)
        {
            s+='a'+v[i];
        }
        reverse(s.begin(), s.end());
        return s;
    }
    void checkSmall(TreeNode* root, vector<int>v, set<string>&st)
    {
        if(!root) return;
        v.push_back(root->val);
        if(!root->left && !root->right)
        {
            string s="";
            s=decodeArr(v);
            st.insert(s);
        }
         else
         {
             checkSmall(root->left, v, st);  // Recursively call for left child
             checkSmall(root->right, v, st); // Recursively call for right child
         }
    }
    string smallestFromLeaf(TreeNode* root) {
        set<string>st;
        vector<int>v;
        checkSmall(root, v, st);
        string ans="";
        for(auto &x: st)
        {
            ans=x;
            break;
        }
        return ans;
    }
};