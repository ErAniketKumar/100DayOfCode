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
    void reverseList(ListNode* &head)
    {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr)
        {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    ListNode* doubleIt(ListNode* head) {
        
        reverseList(head);
        ListNode* temp=head;
        int carry=0;
        ListNode* new_list=new ListNode(-1);
        ListNode* ptr=new_list;
        while(temp)
        {
            ptr->next=new ListNode(((temp->val*2)+carry)%10);
            carry=(((temp->val*2)+carry)/10);
            ptr=ptr->next;
            temp=temp->next;
        }
        if(carry>0)
        {
            ptr->next=new ListNode(carry);
            ptr=ptr->next;
        }
        reverseList(new_list->next);
        return new_list->next;
    }
};