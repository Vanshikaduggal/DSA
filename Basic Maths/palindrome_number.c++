class Solution {
public:
    bool isPalindrome(int x) {
        long temp=x;
        long rev=0;
        while(x>0)
        {
            int last=x%10;
            x/=10;
            rev=(rev*10)+last;
        }
        if(rev==temp)
        {
            return true;
        }
        return false;
    }
};
