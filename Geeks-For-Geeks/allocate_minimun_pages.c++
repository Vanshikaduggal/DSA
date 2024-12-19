class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if(k>n) return -1;
        int start=0,end=0,ans;
        for(int i=0;i<n;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int page=0,count=1;
            for(int i=0;i<n;i++)
            {
                page+=arr[i];
                if(page>mid)
                {
                    count++;
                    page=arr[i];
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
