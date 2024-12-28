class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n = matrix.size(),m=matrix[0].size();
        int top=0,left=0;
        int right=m-1,bottom=n-1;
        while(left<=right && top<=bottom)
        {
            // print top
            for(int j=left;j<=right;j++)
            {
                ans.push_back(matrix[top][j]);
            }
            top++;

            //print right
            for(int i=top;i<=bottom;i++)
            {
                ans.push_back(matrix[i][right]);
            }
             right--;
            //print bottom

            if(top<=bottom)
            {
                for(int j=right;j>=left;j--)
                {
                    ans.push_back(matrix[bottom][j]);
                }
                    bottom--;
            }

            //print left
           if(left<=right)
           {
             for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
              left++;
           }
        }
        return ans;
    }
};
