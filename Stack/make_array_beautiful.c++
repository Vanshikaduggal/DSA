class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> st;
        for(int i=0;i<arr.size();i++)
        {
            if(st.empty())
            {
                st.push(arr[i]); //pushing the element into the stack
            }
            
            else if(arr[i]>=0) //pushing another element
            {
                if(st.top()>=0)
                {
                    st.push(arr[i]); //checking it with the top element of stack
                } 
                else{
                    st.pop();       
                }
            }
            else{
                if(st.top()<0)
                st.push(arr[i]);
                
                else{
                    st.pop();
                }
            }
        }
        
        vector<int> ans(st.size());
        int i=st.size()-1;
        while(!st.empty())
        {
            ans[i]=st.top();
            i--;
            st.pop();
        }
        return ans;
    }
};
