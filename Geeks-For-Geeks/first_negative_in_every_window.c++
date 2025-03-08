class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        queue<int> q;
        int n=arr.size();
        for(int i=0;i<k-1;i++)
        {
            if(arr[i]<0)
            {
                q.push(i);
            }
        }
        
        vector<int> ans;
        for(int i=k-1;i<n;i++)
        {
            if(arr[i]<0)
            {
                q.push(i);
            }
            
            while(!q.empty() && q.front()<i-k+1)
            {
                q.pop();
            }
            
            if(q.empty())
            {
                ans.push_back(0);
            }
            else{
                ans.push_back(arr[q.front()]);
            }
        }
        return ans;
    }
};
