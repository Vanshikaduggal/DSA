class Solution {
  public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(vector<int>& arr) {
        // write code here
        int n=arr.size();
        vector<int> ans(n,1);
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[i]>arr[st.top()])
            {
                ans[st.top()]= st.top()-i;
                st.pop();
            }
            st.push(i);
        }
        
        while(!st.empty())
        {
            ans[st.top()]=st.top()+1;
            st.pop();
        }
        return ans;
    }
};
