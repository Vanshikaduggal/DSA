class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int count =0;
		for(int i=0;i<A.size();i++)
		{
		    for(int j=0;j<A[0].size();j++)
		    {
		        if(A[i][j]==0)
		        {
		            count++;
		        }
		    }
		}
		return count;
	}
};
