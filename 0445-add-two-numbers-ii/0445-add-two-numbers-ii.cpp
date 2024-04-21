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
    ListNode* reverseList(ListNode* head)
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
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1&& !l2) return nullptr;
        if(!l1) return l2;
        if(!l2) return l1;
        l1=reverseList(l1);
        l2=reverseList(l2);
        ListNode* new_list=new ListNode(-1);
        ListNode* ptr=new_list;
        int carry=0;
        while(l1||l2)
        {
            int x=l1? l1->val: 0;
            int y=l2? l2->val:0;
            ListNode* new_node=new ListNode((x+y+carry)%10);
            carry=(x+y+carry)/10;
            ptr->next=new_node;
            ptr=ptr->next;
            if(l1)
            {
                l1=l1->next;
            }
            if(l2)
            {
                l2=l2->next;
            }   
        }
        if(carry>0)
        {
            ListNode* new_node=new ListNode(carry);
            ptr->next=new_node;
            ptr=ptr->next;
        }
        
        new_list=reverseList(new_list->next);
        return new_list;
    }
};