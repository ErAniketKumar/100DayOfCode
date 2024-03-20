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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(!list1 && !list2) return nullptr;
        ListNode* start=list1;
        ListNode* rend=list1;

       
        for(int i=1;i<a;i++)
        {
            start=start->next;
        }

      
        for(int i=0;i<=b;i++)
        {
            rend=rend->next;
        }

        start->next=nullptr;

        ListNode* endlist2=list2;
        while(endlist2->next)
        {
            endlist2=endlist2->next;
        }
        start->next=list2;
        endlist2->next=rend;
        return list1;

    }
};