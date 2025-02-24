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

    bool check(vector<ListNode*> &visited,ListNode *curr)
    {
        for(int i=0;i<visited.size();i++)
        {
            if(visited[i]==curr)
            {
                return true;
            }
        }
        return false;
    }
    bool hasCycle(ListNode *head) {
        ListNode *curr=head;
        vector<ListNode*> visited;
        while(curr)
        {
            if(check(visited,curr))
            {
                return 1;
            }
            visited.push_back(curr);
            curr=curr->next;
        }
        return 0;
    }
};



// OPRIMAL APPROACH :
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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

            if(fast==slow)
            {
                return true;
            }
        }
        return false;
    }
};
