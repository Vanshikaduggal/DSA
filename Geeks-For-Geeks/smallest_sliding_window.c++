class Solution {
public:
    int findSubString(string &s) {
        vector<int> count(256, 0); // Array to track character frequencies
        int distinctCount = 0;     // Number of distinct characters in `s`
        int first = 0, second = 0; // Sliding window pointers
        int minLength = s.size();  // Minimum length of substring containing all unique characters
        
        // Calculate the number of unique characters in the string
        vector<bool> present(256, false);
        for (char c : s) {
            if (!present[c]) {
                present[c] = true;
                distinctCount++;
            }
        }
        
        int currentCount = 0; // Track the number of unique characters in the current window
        
        while (second < s.size()) {
            // Expand the window by moving `second`
            if (count[s[second]] == 0) {
                currentCount++;
            }
            count[s[second]]++;
            second++;
            
            // When the window contains all unique characters, try shrinking it
            while (currentCount == distinctCount) {
                minLength = min(minLength, second - first);
                
                // Shrink the window by moving `first`
                count[s[first]]--;
                if (count[s[first]] == 0) {
                    currentCount--;
                }
                first++;
            }
        }
        
        return minLength;
    }
};
