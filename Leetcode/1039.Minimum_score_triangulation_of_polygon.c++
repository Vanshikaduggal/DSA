class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int len = 2; len < n; len++) {         // interval length
            for (int i = 0; i + len < n; i++) {     // i = start index
                int j = i + len;                    // j = end index
                dp[i][j] = INT_MAX;
                for (int k = i + 1; k < j; k++) {   // possible partitions
                    int cost = dp[i][k] + dp[k][j] + values[i] * values[k] * values[j];
                    dp[i][j] = min(dp[i][j], cost);
                }
            }
        }

        return dp[0][n - 1];
    }
};
