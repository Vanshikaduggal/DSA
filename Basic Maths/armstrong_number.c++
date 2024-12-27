class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        long dup = n;
        long sum=0;
        long rev=0;
        while(n>0)
        {
            int last=n%10;
            sum+=(last*last*last);
            n/=10;
        }
        if(sum==dup)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
