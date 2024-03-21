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
    int pairSum(ListNode* head) {
        if(!head) return 0;
        if(!head->next->next)
        return head->val+head->next->val;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=slow;
        ListNode* curr=slow->next;
        slow->next=nullptr;

        while(curr)
        {
            ListNode* nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }

        ListNode* head1=head;
        ListNode* head2=prev;
        ListNode* ptr1=head1;
        ListNode* ptr2=head2;
        int sum=0;
        while(ptr1 && ptr2)
        {
            sum=max(sum, ptr1->val+ptr2->val);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return sum;
    }
};