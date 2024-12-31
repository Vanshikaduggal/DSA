class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        string rev=s;
        reverse(rev.begin(),rev.end());
        int size=s.size();
        s+='$';
        s+=rev;
        int n=s.size();
        vector<int> lps(n,0);
        int prefix=0,suffix=1;
        while(suffix<s.size())
        {
            if(s[prefix]==s[suffix])
            {
                lps[suffix]=prefix+1;
                prefix++;
                suffix++;
            }
            else{
                if(prefix==0)
                {
                    suffix++;
                }
                else{
                    prefix=lps[prefix-1];
                }
            }
        }
        
        return size-lps[n-1];
    }
};
