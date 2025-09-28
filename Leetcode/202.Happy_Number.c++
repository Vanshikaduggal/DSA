class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast = gret(n);

        while(fast!=1 && slow!=fast)
        {
            slow= gret(slow);
            fast = gret(gret(fast));
        }
        return fast == 1;
    }   

private:
    int gret(int n){
        int sum=0;
        while(n>0)
        {
            int digit = n%10;
            sum += digit*digit;
            n/=10;
        }
        return sum;
    }
};
