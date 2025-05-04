class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count[10][10]={0};
        int result =0;
        for(auto& d:dominoes)
        {
            int a=min(d[0],d[1]);
            int b=max(d[0],d[1]);
            result+=count[a][b];
            count[a][b]++;
        }
        return result;
    }
};
