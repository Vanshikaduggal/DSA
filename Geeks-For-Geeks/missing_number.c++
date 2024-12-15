class Solution {
  public:
    int missingNumber(vector<int>& arr) {
        // code here
        int n= arr.size()+1;
        int total = n*(n+1)/2;
        int sum=0;
        for(int num:arr)
        {
            sum+=num;
        }
        
        return total-sum;
    }
};
