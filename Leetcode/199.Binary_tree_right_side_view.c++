class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            int n=q.size();
            ans.push_back(q.front()->val);
            while(n--)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
        }
        return ans;
    }
};
