BRUTE FORCE APPROACH :
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(),m=needle.size();
        for(int i=0;i<=n-m;i++)
        {
            int first=i,second=0;
            while(second<m)
            {
                if(haystack[first]!=needle[second])
                break;

                second++,first++;

            }
            if(second==m)
            return i;
        }
        return -1;
    }
};

SECOND APPROACH :

class Solution {
public:
    void lpsfind(vector<int> &lps, string s) {
        int prefix = 0, suffix = 1;
        while (suffix < s.size()) {
            if (s[prefix] == s[suffix]) {
                lps[suffix] = prefix + 1;
                prefix++;
                suffix++;
            } else {
                if (prefix == 0) {
                    lps[suffix] = 0;
                    suffix++;
                } else {
                    prefix = lps[prefix - 1];
                }
            }
        }
    }

    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // Edge case: empty needle
        vector<int> lps(needle.size(), 0);
        lpsfind(lps, needle);
        
        int n = haystack.size(), m = needle.size();
        int first = 0, second = 0;
        
        while (first < n) {
            if (needle[second] == haystack[first]) {
                first++;
                second++;
                if (second == m) {
                    return first - second; // Match found
                }
            } else {
                if (second == 0) {
                    first++;
                } else {
                    second = lps[second - 1];
                }
            }
        }
        
        return -1; // Match not found
    }
};
