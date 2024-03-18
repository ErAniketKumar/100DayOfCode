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
    void sumofTree(TreeNode* root, int& sum)
    {
        if(root)
        {
            sum+=root->val;
            sumofTree(root->left, sum);
            sumofTree(root->right, sum);
        }
    }
    void insertVal(TreeNode* root, vector<TreeNode*>&nodes)
    {
        if(root)
        {
            insertVal(root->left, nodes);
            nodes.push_back(root);
            insertVal(root->right, nodes);
        }
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int>res;
        if(!root) return res;
        vector<TreeNode*>nodes;
        insertVal(root, nodes);

        for(int i=0;i<nodes.size();i++)
        {
            int sum=0;
            sumofTree(nodes[i],sum);
            res.push_back(sum);
        }

        unordered_map<int, int>m;
        int maxfr=0;
        for(int i=0;i<res.size();i++)
        {
            m[res[i]]++;
            maxfr=max(maxfr, m[res[i]]);
        }
        // int maxfr=0;
        // for(auto &x: m)
        // {
        //     maxfr=max(maxfr, x.second);
        // }
        res.clear();
        for(auto &x: m)
        {
            if(x.second==maxfr)
            {
                res.push_back(x.first);
            }
        }
        return res;
    }
};