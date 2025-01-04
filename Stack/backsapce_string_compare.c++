class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // Stack for the first string
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!st.empty()) {
                    st.pop(); // Perform backspace
                }
            } else {
                st.push(s[i]); // Push valid character
            }
        }

        // Stack for the second string
        stack<char> gt;
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#') {
                if (!gt.empty()) {
                    gt.pop(); // Perform backspace
                }
            } else {
                gt.push(t[i]); // Push valid character
            }
        }

        // Compare the two stacks
        if (st.size() != gt.size()) {
            return false; // Different sizes, cannot be equal
        }

        while (!st.empty()) {
            if (st.top() != gt.top()) {
                return false; // Characters don't match
            }
            st.pop();
            gt.pop();
        }

        return true; // Stacks are identical
    }
};
