class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            count[ch-'a']++;
        }

        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(count[ch-'a']==1)
            return i;
        }
        return -1;
    }
};
