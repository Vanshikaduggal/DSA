class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> n;
        ListNode *temp =head;
        while(temp!=NULL)
        {
            n.push_back(temp->val);
            temp=temp->next;
        }

        sort(n.begin(),n.end());

        int i=0;
        temp =head;
        while(temp!=NULL)
        {
            temp->val=n[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};
