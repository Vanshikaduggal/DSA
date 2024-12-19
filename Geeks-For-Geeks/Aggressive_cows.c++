class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        int n=stalls.size();
        int start=1,end,ans=0;
        sort(stalls.begin(),stalls.end());
        end=stalls[n-1]-stalls[0];
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int count=1,position=stalls[0];
            for(int i=1;i<n;i++)
            {
                if(position+mid<=stalls[i])
                {
                    count++;
                    position=stalls[i];
                }
            }
            
            if(count>=k)
            {
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};
