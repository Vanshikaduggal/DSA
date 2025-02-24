/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next !=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                ListNode *entry=head;
                while(entry!=slow)
                {
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};
