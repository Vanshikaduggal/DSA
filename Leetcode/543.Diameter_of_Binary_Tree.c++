class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        height(root,maxi);
        return maxi;
    }
private:
    int height(TreeNode* node, int &maxi)
    {
        if(node==NULL) return 0;
        int lh=height(node->left,maxi);
        int rh=height(node->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
};
