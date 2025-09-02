class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxprod = nums[0];
        int minprod = nums[0];
        int ans = nums[0];

        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
            {
                swap(maxprod,minprod);
            }
            
            maxprod = max(nums[i],nums[i]*maxprod);
            minprod = min(nums[i],nums[i]*minprod);

            ans=max(ans,maxprod);
        }
        return ans;

    }
};
