
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        vector<int> ans;
        while(temp!=NULL)
        {
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int i=ans.size()-1;
        temp=head;
        while(temp)
        {
            temp->val=ans[i];
            i--;
            temp=temp->next;
        }
        return head;
    }
};
