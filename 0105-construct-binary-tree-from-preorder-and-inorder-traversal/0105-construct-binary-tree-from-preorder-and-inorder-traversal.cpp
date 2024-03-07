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
int index=0;
    int findPos(int target, vector<int>in)
    {
        for(int i=0;i<in.size();i++)
        {
            if(in[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
    TreeNode* Construct(vector<int>pre, vector<int>in, int inSt,int inEnd)
    {
        if(index>=in.size() ||inSt>inEnd)
        {
            return nullptr;
        }
        int ele=pre[index++];
        TreeNode* root=new TreeNode(ele);
        int pos=findPos(ele, in);
        root->left=Construct(pre,in, inSt, pos-1);
        root->right=Construct(pre,in, pos+1, inEnd);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* root=Construct(preorder, inorder,0,inorder.size()-1);
        return root;
    }
};