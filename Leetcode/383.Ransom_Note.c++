class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.size()==0)
        return false;

        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());

        int i=0,j=0;
        while(i<ransomNote.size() && j<magazine.size())
        {
            if(ransomNote[i]==magazine[j])
            {
                i++;
                j++;
            }
            else if(ransomNote[i]>magazine[j])
            {
                j++;
            }
            else{
                return false;
            }
        }
        return i==ransomNote.size();
    }
};
