class Solution {
public:
    string reverseWords(string s) {
        stringstream ans(s); //store the initil string 
        string word,result; //take two strings one for reversing and other for storing
        while(ans>>word)
        {
            reverse(word.begin(),word.end());
            if(!result.empty()) result+=" ";
            result+=word;
        }
        return result;

        
    }
};
