class Solution {
  public:
    int getSize(Node* node) {
        // code here
        queue<Node*> q;
        q.push(node);
        
        int count=0;
        
        vector<int> ans;
        Node *temp;
        while(!q.empty())
        {
            temp=q.front();
            q.pop();
            ans.push_back(temp->data);
            if(temp->left)
            {
                q.push(temp->left);
            }
            
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        return ans.size();
    }
};
