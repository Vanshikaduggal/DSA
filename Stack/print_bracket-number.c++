class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        vector<int> ans;
        stack<int> s;
        long long count=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='(')
            {
                count++;
                s.push(count);
                ans.push_back(count);
            }
            
            else if(str[i]==')')
            {
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};
