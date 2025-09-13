class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26],maxCons=0,maxVow=0;
        for(char c:s)
        {
            int i=c-'a';
            freq[i]++;
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                maxVow=max(maxVow,freq[i]);
            }
            else{
                maxCons=max(maxCons,freq[i]);
            }
        }
        return maxVow+maxCons;
    }
};
