class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL ||head->next==NULL)
        {
            return NULL;
        }

        ListNode *prev=NULL,*fast=head,*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }
};
