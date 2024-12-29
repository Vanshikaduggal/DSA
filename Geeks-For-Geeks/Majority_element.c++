class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
        int n=arr.size();
        int candidate,count=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                candidate=arr[i];
            }
            else{
                if(candidate==arr[i])
                count++;
                else
                count--;
            }
        }
        
        count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==candidate)
            count++;
            
            if(count>n/2)
            return candidate;
        }
        return -1;
    }
};
