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
    vector<int> nextLargerNodes(ListNode* head) {
        reverseList(head);
        vector<int>ans;
        stack<int>st;
        ListNode* temp=head;
        while(temp)
        {
            int val=temp->val;
            if(!st.empty() && st.top()>val)
            {
                ans.push_back(st.top());
                st.push(val);
            } else {
                while(!st.empty())
                {
                    if(st.top()>val)
                    {
                        ans.push_back(st.top());
                        st.push(val);
                        break;
                    } 
                    st.pop();
                }
                if(st.empty())
                {
                    ans.push_back(0);
                    st.push(val);
                }
            }
            temp=temp->next;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};