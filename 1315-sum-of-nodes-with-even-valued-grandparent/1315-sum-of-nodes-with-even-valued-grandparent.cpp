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

    void parentMaping(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&parentMap)
    {
        if(!root) return;
        parentMap[root]=nullptr;
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty())
        {
            TreeNode* temp=qu.front(); qu.pop();
            if(temp->left)
            {
                qu.push(temp->left);
                parentMap[temp->left]=temp;
            }
            if(temp->right)
            {
                qu.push(temp->right);
                parentMap[temp->right]=temp;
            }
        }
    }

    int sumEvenGrandparent(TreeNode* root) {
        if(!root||!root->left &&!root->right) return 0;
        int sum=0;
        unordered_map<TreeNode*,TreeNode*>parentMap;
        parentMaping(root,parentMap);
        queue<TreeNode*>qu;
        qu.push(root);
        while(!qu.empty())
        {
            TreeNode* temp=qu.front();
            qu.pop();
            TreeNode* parent=parentMap[temp];
            if(parent)
            {
                TreeNode* gparent=parentMap[parent];
                if(gparent && gparent->val%2==0)
                {
                    sum+=temp->val;
                }
            }
            if(temp->left) qu.push(temp->left);
            if(temp->right) qu.push(temp->right);
        }
        return sum;
    }
};