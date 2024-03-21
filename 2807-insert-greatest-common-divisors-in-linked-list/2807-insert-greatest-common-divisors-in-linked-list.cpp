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
class Solution {
public:
    void insertVal(ListNode* head,vector<int>&v)
    {
        ListNode* temp=head;
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        vector<int>v;
        if(!head || !head->next) return head;
        insertVal(head, v);
        vector<int>gcdd;
        for(int i=1;i<v.size();i++)
        {
            gcdd.push_back(gcd(v[i-1], v[i]));
        }
        ListNode* newList=new ListNode(-1);
        ListNode* ptr=newList;
        int k=0;
        for(int i=0;i<v.size();i++)
        {
            ListNode* data=new ListNode(v[i]);
            ptr->next=data;
            ptr=ptr->next;
            if(k<gcdd.size())
            {
               ListNode* gcdVal=new ListNode(gcdd[k++]);
               ptr->next=gcdVal;
               ptr=ptr->next;
            }    
        }
        return newList->next;
        
    }
};