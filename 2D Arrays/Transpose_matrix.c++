class Solution {
  public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>>& mat, int n) {
        // code here
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
};


Another Method :
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> trans(m,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                trans[j][i]=matrix[i][j];
            }
        }
        return trans;
    }
};
