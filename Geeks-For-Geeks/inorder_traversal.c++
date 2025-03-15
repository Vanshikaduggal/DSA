class Solution {
  public:
  void in(Node *root,vector<int>&ans)
  {
      if(root==NULL) return;
      in(root->left,ans);
      ans.push_back(root->data);
      in(root->right,ans);
  }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        in(root,ans);
        return ans;
    }
};
