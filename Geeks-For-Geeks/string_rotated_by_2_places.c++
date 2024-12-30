class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    
    void rotateclk(string &s)
    {
        char c =s[s.size()-1];
        int index = s.size()-2;
        while(index>=0)
        {
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;
    }
    
    void rotateanti(string &s)
    {
        char c= s[0];
        int index=1;
        while(index<s.size())
        {
            s[index-1]=s[index];
            index++;
        }
        s[s.size()-1]=c;
    }
    
    bool isRotated(string& s1, string& s2) {
        // Your code here
        if(s1.size()!=s2.size())
        {
            return 0;
        }
        
        string clk,anti;
        clk=s1;
        rotateclk(clk);
        rotateclk(clk);
        
        if(clk==s2)
        {
            return 1;
        }
        
        anti=s1;
        rotateanti(anti);
        rotateanti(anti);
        
        if(anti==s2)
        {
            return 1;
        }
        
        return 0;
    }
};
