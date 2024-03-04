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
    bool checkSort(vector<int>v)
    {
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1])
            {

            }
            else return false;
        }
        return true;
    }
    bool checkOddint(vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2!=0)
            {

            }
            else return false;
        }
        return true;
    }

    bool checkEvenNum(vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
            {

            }
            else return false;
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
        vector<int>res;
        queue<TreeNode*>qu;
        qu.push(root);
        int level=0;
        while(!qu.empty())
        {
            int n=qu.size();
            while(n--)
            {
                TreeNode* temp=qu.front();
                qu.pop();
                res.push_back(temp->val);
                if(temp->left) qu.push(temp->left);
                if(temp->right) qu.push(temp->right);
            }
            if(level%2==0)
            {
                bool con1=checkOddint(res);
                bool con2=checkSort(res);
                if(con1&&con2)
                {

                }
                else return false;
            }
            else{
                bool con1=checkEvenNum(res);
                reverse(res.begin(), res.end());
                bool con2=checkSort(res);
                if(con1 && con2)
                {

                }
                else return false;
            }
            level++;
            res.clear();
        }
        return true;
    }
};