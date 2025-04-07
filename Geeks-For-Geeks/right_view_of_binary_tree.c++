class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ans;
       if(!root) return ans;
       queue<Node*> q;
       q.push(root);
       while(!q.empty())
       {
           int n=q.size();
           ans.push_back(q.front()->data);
           while(n--)
           {
               Node *temp=q.front();
               q.pop();
               
               if(temp->right) q.push(temp->right);
               if(temp->left) q.push(temp->left);
           }
       }
       return ans;
    }
};
