class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        vector<int> ans(n,-1);
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && a[st.top()]>a[i])
            {
                ans[st.top()]=a[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
