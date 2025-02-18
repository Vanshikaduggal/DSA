class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        int count=1;
        if(k==1)
        {
            return NULL;
        }
        Node *curr=head,*prev=NULL;
        while(curr)
        {
           if(k==count)
           {
               prev->next=curr->next;
               delete curr;
               curr=prev->next;
               count=1;
           }
           else{
               prev=curr;
               curr=curr->next;
               count++;
           }
        }
        return head;
    }
};
