
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next ==NULL)
        {
            return head;
        }
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *evenhead = even;
        while(even && even->next)
        {
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;
    }
};
