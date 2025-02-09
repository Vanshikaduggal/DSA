class Solution {
    public long countBadPairs(int[] nums) {
        int n=nums.length;
        long totalPair = (long) n*(n-1)/2;
        long goodPair=0;
        HashMap<Integer,Integer> map =new HashMap<>();

        for(int i=0;i<n;i++)
        {
            int ans=nums[i]-i;
            if(map.containsKey(ans))
            {
                goodPair+=map.get(ans);
            }

            map.put(ans,map.getOrDefault(ans,0)+1);
        }

        return totalPair-goodPair;
    }
}
