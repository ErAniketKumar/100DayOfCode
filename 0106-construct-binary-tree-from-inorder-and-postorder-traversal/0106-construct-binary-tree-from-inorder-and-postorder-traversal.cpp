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
    
    int findPos(vector<int>in, int target)
    {
        for(int i=0;i<in.size();i++)
        {
            if(in[i]==target)
            return i;
        }
        return -1;
    }
    TreeNode* Construct(vector<int>in, vector<int>post, int inSt, int inEnd, int& index)
    {
        if(inSt>inEnd)
        return nullptr;
        int ele = post[index];
        TreeNode* root = new TreeNode(ele);
        index--; // Decrement index after using it
        int pos = findPos(in, ele);
        root->right=Construct(in, post,pos+1, inEnd, index);
        root->left=Construct(in, post,inSt, pos-1,index);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty()||postorder.empty()) return nullptr;
        int index=inorder.size()-1;
        TreeNode* root=Construct(inorder, postorder,0, postorder.size()-1, index);
        return root;
    }
};