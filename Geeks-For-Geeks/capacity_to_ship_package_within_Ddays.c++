class Solution {
  public:
    int leastWeightCapacity(int arr[], int n, int d) {
        // code here
        int start=0,end=0,ans;
        for(int i=0;i<n;i++)
        {
            start=max(start,arr[i]);
            end+=arr[i];
        }
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int package=0,count=1;
            for(int i=0;i<n;i++)
            {
                package+=arr[i];
                if(package>mid)
                {
                    count++;
                    package=arr[i];
                }
            }
            
            if(count<=d)
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
