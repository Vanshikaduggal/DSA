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
        if(head==NULL ||head->next==NULL) return 0;
        //Find the middle of linked list
        ListNode *slow=head,*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }

        //reverse the linkedlist
        ListNode *prev=NULL,*curr=slow;
        while(curr)
        {
            ListNode *currNode =curr->next;
            curr->next=prev;
            prev=curr;
            curr=currNode;
        }

        //compute the sum
        int sum=0;
        ListNode *first=head,*second=prev;
        while(second)
        {
            sum=max(sum,first->val+second->val);
            first=first->next;
            second=second->next;
        }
        return sum;
    }
};
