class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int total = INT_MIN;
        int index = -1;

        for (int i = 0; i < arr.size(); i++) {
            int count = 0;
            for (int j = 0; j < arr[0].size(); j++) {
                if (arr[i][j] == 1) {
                    count++;
                }
            }
            if (count > total) {
                total = count;
                index = i;
            }
        }

        // Return the index of the row with the maximum number of 1s
        return index;
    }
};


OPTIMIZED Approach :

// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        int index=-1;
        int j=m-1;
        for(int i=0;i<n;i++)
        {
            while(j>=0 && arr[i][j]==1)
            {
                j--;
                index=i;
            }
        }
        return index;
    }
};
