class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mdiff =0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int index=(i+1)%n;
            int diff=abs(nums[i]-nums[index]);
            mdiff=max(diff,mdiff);
        }
        return mdiff;
    }
};
