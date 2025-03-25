class Solution {
public:
    int height(TreeNode* root, bool &valid)
    {
        if(root==NULL) return 0;
        int l=height(root->left,valid);
        int r=height(root->right,valid);
        if(abs(l-r)>1)
        {
            valid=0;
        }

        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        bool valid =1;
        height(root,valid);
        return valid;
    }
};
