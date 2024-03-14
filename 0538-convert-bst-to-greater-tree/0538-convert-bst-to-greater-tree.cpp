class Solution
{
public:
    void makeTree(TreeNode *&root, unordered_map<int, int> &m)
    {
        if (!root)
            return;
        makeTree(root->left, m);
        root->val = m[root->val];
        makeTree(root->right, m);
    }

    TreeNode *convertBST(TreeNode *root)
    {
        if (!root)
            return nullptr;

        vector<int> v;
        queue<TreeNode *> qu;
        qu.push(root);
        while (!qu.empty())
        {
            TreeNode *temp = qu.front();
            qu.pop();
            v.push_back(temp->val);
            if (temp->left)
                qu.push(temp->left);
            if (temp->right)
                qu.push(temp->right);
        }

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        unordered_map<int, int> m;

        int sum=0;
        //prefixsum;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
            m[v[i]]=sum;
        }
        
        makeTree(root, m);
        return root;
    }
};