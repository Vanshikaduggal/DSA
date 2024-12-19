class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int start=0,end=1;
        while(start<n && end<n)
        {
            if(arr[end]-arr[start]==x)
            {
                return true;
            }
            else if(arr[end]-arr[start]<x)
            {
                end++;
            }
            else{
                start++;
            }
            if(start==end){
                end++;
            }
        }
        return false;
    }
};
