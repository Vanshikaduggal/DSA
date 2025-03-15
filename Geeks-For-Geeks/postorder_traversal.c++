class Solution {
  public:
  
  void post(Node *root,vector<int> &ans)
  {
      if(root==NULL) return ;
      post(root->left,ans);
      post(root->right,ans);
      cout<<root->data<<" ";
  }
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> ans;
        post(root,ans);
        return ans;
    }
};
