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
   bool matches(const vector<int>& nodeVal, const vector<int>& listVal)
{
    if(nodeVal.size() < listVal.size()) return false;
    for(int i = 0; i < listVal.size(); i++)
    {
        if(listVal[i] != nodeVal[i]) return false;
    }
    return true;
}

bool findpathmatch(TreeNode* root, vector<int>& v, const vector<int>& listVal)
{
    if(root)
    {
        v.push_back(root->val);
        if(!root->left && !root->right)
        {
            if(matches(v, listVal))
            {
                return true;
            }
        }
        if(findpathmatch(root->left, v, listVal)) return true; // Use the return value
        if(findpathmatch(root->right, v, listVal)) return true; // Use the return value
        v.pop_back(); // Remove the current node value when backtracking
    }
    return false;
}


    void findHeadNodes(TreeNode* root, int target, vector<TreeNode*>&nodes)
    {
        if(root)
        {
            if(root->val==target)
            {
                nodes.push_back(root);
            }
            findHeadNodes(root->left, target, nodes);
            findHeadNodes(root->right, target, nodes);
        }
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if(!head) return true;
        if(!root && !head) return false;
        if(!root || !head) return false;
        vector<TreeNode*>nodes;
        findHeadNodes(root,head->val, nodes);
        ListNode* temp=head;
        vector<int>listVal;
        while(temp)
        {
            listVal.push_back(temp->val);
            temp=temp->next;
        }

        for(int i=0;i<nodes.size();i++)
        {
            vector<int>v;
            if(findpathmatch(nodes[i], v, listVal))
            {
                return true;
            } 
           
        }
        return false;

    }
};