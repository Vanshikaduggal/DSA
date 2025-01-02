class Solution {
  public:
  
  bool valid(int i,int j,int n)
  {
      return i>=0&&i<n && j>=0 && j<n;
  }
  
  int row[4]={-1,1,0,0};
  int col[4]={0,0,-1,1};
  string dir="UDLR";
  void Total(vector<vector<int>>&matrix,int i,int j,int n,vector<vector<bool>>&visited,string& path,vector<string>&ans)
  {
      if(i==n-1 && j==n-1)
      {
          ans.push_back(path);
          return;
      }
      
      visited[i][j]=1;
      for(int k=0;k<4;k++)
      {
         if (valid(i+row[k],j+col[k],n) && matrix[i+row[k]][j+col[k]] && !visited[i+row[k]][j+col[k]] )
         {
             path.push_back(dir[k]);
             Total(matrix,i+row[k],j+col[k],n,visited,path,ans);
             path.pop_back();
         }
      }
      visited[i][j]=0;
  }
  
    vector<string> findPath(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        vector<string> ans;
        string path;
        
        if(mat[0][0]==0 || mat[n-1][n-1]==0)
        {
            return ans;
        }
        
        Total(mat,0,0,n,visited,path,ans);
        return ans;
    }
};
