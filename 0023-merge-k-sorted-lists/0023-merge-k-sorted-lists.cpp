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
class Solution
{
public:
    void merge(ListNode *&head1, ListNode *head2)
    {
        ListNode *new_list = new ListNode(-1);
        ListNode *ptr3 = new_list;
        while (head1 && head2)
        {
            if (head1->val < head2->val)
            {
                ptr3->next = head1;
                head1 = head1->next;
            }
            else
            {
                ptr3->next = head2;
                head2 = head2->next;
            }
            ptr3 = ptr3->next;
        }
        if (head1)
        {
            ptr3->next = head1;
        }
        if (head2)
        {
            ptr3->next = head2;
        }
        head1 = new_list->next;
        delete new_list;
    }
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *new_list = nullptr;
        for (auto head : lists)
        {
            merge(new_list, head);
        }
        return new_list;
    }
};