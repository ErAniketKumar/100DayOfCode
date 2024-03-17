class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if (!root) return nullptr;

        queue<TreeNode*> qu;
        qu.push(root);
        int level=0;
        while (!qu.empty()) {
            int n = qu.size();
            vector<TreeNode*> nodes;
            while(n--)
            {
                TreeNode* temp=qu.front(); qu.pop();
                nodes.push_back(temp);
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            
            if (level%2) 
            {
                int i=0, j=nodes.size()-1;
                while(i<j)
                {
                    swap(nodes[i]->val, nodes[j]->val);
                    i++;
                    j--;
                }
            }
            level++;
        }

        return root;
    }
};