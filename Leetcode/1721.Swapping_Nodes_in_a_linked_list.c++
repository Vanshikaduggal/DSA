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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *prev=head,*curr=head;
        for(int i=1;i<k;i++)
        {
            curr=curr->next;
        }
        ListNode *end=curr;
        ListNode *temp=head;
        for(int i=0;i<k;i++)
        {
            temp=temp->next;
        }
        while(temp)
        {
            prev=prev->next;
            temp=temp->next;
        }
        swap(end->val,prev->val);
        return head;

    }
};
