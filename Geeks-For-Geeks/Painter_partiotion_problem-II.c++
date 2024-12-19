class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        // return minimum time
        int n=arr.size();
        int start=0,end=0,ans;
        for(int i=0;i<n;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int painter=0,count=1;
            for(int i=0;i<n;i++)
            {
                painter+=arr[i];
                if(painter>mid)
                {
                    count++;
                    painter=arr[i];
                }
            }
            
            if(count<=k)
            {
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
