class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10); 
        
        string temp;
        int count = 0;
        int n = s.size();
        int index = 0;
        
        while (index < n) {
            if (s[index] == ' ') {
                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            } else {
                temp += s[index];
            }
            index++;
        }
        
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;
        
        // Construct the sorted sentence
        temp.clear();
        for (int i = 1; i <= count; i++) {
            temp += ans[i];
            temp += " ";
        }
        temp.pop_back(); // Remove the trailing space
        return temp;
    }
};
