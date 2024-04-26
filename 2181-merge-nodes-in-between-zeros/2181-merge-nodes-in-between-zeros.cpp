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
    ListNode* mergeNodes(ListNode* head) {
        if(!head ||!head->next) return head;
        ListNode* temp=head->next;
        ListNode* new_list=new ListNode(-1);
        ListNode* ptr=new_list;
        int sum=0;
        while(temp)
        {
            sum+=temp->val;
            if(temp->val==0)
            {
                ptr->next=new ListNode(sum);
                ptr=ptr->next;
                sum=0;
            }
            temp=temp->next;
        }
   
        return new_list->next;
    }
};