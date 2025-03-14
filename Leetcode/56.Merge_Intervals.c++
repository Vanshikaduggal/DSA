class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()) return {};

        sort(intervals.begin(),intervals.end());

        vector<vector<int>> result;
        vector<int> curr=intervals[0];
        result.push_back(curr);

        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=curr[1])
            {
                curr[1]=max(curr[1],intervals[i][1]);
                result.back()=(curr);
            }
            else{
                curr=intervals[i];
                result.push_back(curr);
            }
        }
        return result;
    }
};
