THIS ARRAY CAN CONTAIN DUPLICATE NUMBERS :

class Solution {
public:
    void permut(vector<int>& arr,vector<vector<int>>&ans,int index)
    {
        if(index==arr.size())
        {
            ans.push_back(arr);
            return;
        }

        vector<bool> visit(21,0);
        for(int i=index;i<arr.size();i++)
        {
            if(visit[arr[i]+10]==0)
            {
                swap(arr[index],arr[i]);
                permut(arr,ans,index+1);
                swap(arr[index],arr[i]);
                visit[arr[i]+10]=1;
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        permut(nums,ans,0);
        return ans;
    }
};
