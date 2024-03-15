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
    void checkavg(TreeNode* root, vector<int>&v)
    {
        if(!root) return;
        if(root)
        {
            v.push_back(root->val);
            checkavg(root->left, v);;
            checkavg(root->right, v);;
        }
    }
    void insertNodeInArray(TreeNode* root, vector<TreeNode*>&node)
    {
        if(!root) return;
        if(root)
        {
            node.push_back(root);
            insertNodeInArray(root->left, node);
            insertNodeInArray(root->right, node);
        }
    }
    int sumof(vector<int>v)
    {
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        return sum;
    }
    int averageOfSubtree(TreeNode* root) {
        vector<TreeNode*>node;
        insertNodeInArray(root,node);
        int count=0;
        for(int i=0;i<node.size();i++)
        {
            vector<int>v;
            checkavg(node[i], v);
            if(sumof(v)/v.size()==node[i]->val)
            {
                count++;
            }
        }
        return count;
    }
};