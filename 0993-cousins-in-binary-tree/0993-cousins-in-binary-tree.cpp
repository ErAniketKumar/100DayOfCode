class Solution {
public:
    bool checkSameLevel(TreeNode* root, int x, int y)
    {
        queue<TreeNode*> qu;
        qu.push(root);
        int l1,l2,currlevel=0;
        while(!qu.empty())
        {
            int n=qu.size();
            while(n--)
            {
                TreeNode* temp=qu.front();
                qu.pop();
                if(temp->val==x)
                l1=currlevel;
                if(temp->val==y)
                l2=currlevel;
                if(temp->left)
                qu.push(temp->left);
                if(temp->right)
                qu.push(temp->right);
            }
            currlevel++;
            if(l1!=l2) return false;
        }
        return l1==l2;
    }

    bool checkSameParent(TreeNode* root,int x, int y)
    {
        if(!root) return 0;
        if(root->left && root->right)
        {
            if(root->left->val==x && root->right->val==y)
            return true;
            if(root->left->val==y && root->right->val==x)
            return true;
        }
        return checkSameParent(root->left, x,y) || checkSameParent(root->right, x,y);

    }

    bool isCousins(TreeNode* root, int x, int y) {
        if(!root) return false;
        bool slevel=checkSameLevel(root, x, y);
        bool dparent=!checkSameParent(root, x, y);
        return slevel&&dparent;
    }
};
