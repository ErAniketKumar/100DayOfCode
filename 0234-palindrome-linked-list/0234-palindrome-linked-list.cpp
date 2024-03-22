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
    bool isPalindrome(ListNode* head) {
        //step1 find mid;
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        while(ptr2!=NULL && ptr2->next!=NULL)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next->next;
        }
        //break into two linkedlist
        ListNode* curr=ptr1->next;
        ListNode* prev=ptr1;
        ptr1->next=NULL;
        // reverse secont part of list
        while(curr)
        {
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        // compaire head1 and head2;
        ListNode* head1=head;
        ListNode* head2=prev;
        while(head2)
        {
            if(head1->val!=head2->val)
            {
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        return true;

        
    }
};