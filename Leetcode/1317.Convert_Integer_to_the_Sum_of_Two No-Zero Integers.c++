class Solution {
public:

    bool hasnum(int num)
    {
        while(num>0)
        {
            if(num%10==0) return true;
            num/=10;
        }
        return false;
    }
    vector<int> getNoZeroIntegers(int n) {
        int a=1,b=n-a;
        while(hasnum(a)||hasnum(b))
        {
            a++;
            b=n-a;
        }
        return {a,b};
    }
};
