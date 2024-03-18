/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    void insertVal(ListNode* head, vector<int>&v)
    {
        if(!head) return;
        while(head)
        {
            v.push_back(head->val);
            head=head->next;
        }
    }
    
    TreeNode* bst(vector<int>v, int left, int right)
    {
        if(left>right) return nullptr;
        int mid=left+(right-left)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=bst(v, left, mid-1);
        root->right=bst(v, mid+1,right);
        return root;
        
    }
    TreeNode* sortedListToBST(ListNode* head) {
     
        vector<int>v;
        insertVal(head, v);
        if(v.empty()) return nullptr; 
        return bst(v, 0,v.size()-1);
    }
};