
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL ||headB==NULL) return NULL;
        ListNode *p1=headA;
        ListNode *p2=headB;

        while(p1!=p2)
        {
            p1= p1?p1->next:headB;
            p2=p2?p2->next:headA;
        }
        return p1;
    }
};
