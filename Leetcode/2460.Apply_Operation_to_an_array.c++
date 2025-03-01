class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int left =0;
        int right=1;
        int n=nums.size();
        while(right<n)
        {
            if(nums[left]==nums[right])
            {
                nums[left]=nums[left]*2;
                nums[right]=0;
            }
            left++;
            right++;
        }
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};
