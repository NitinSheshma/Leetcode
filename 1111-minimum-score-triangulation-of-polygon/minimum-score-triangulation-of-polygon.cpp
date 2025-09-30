class Solution {
public:
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        
        if (n < 3) {
            return 0;
        }

        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int L = 2; L < n; ++L) {
            for (int i = 0; i < n - L; ++i) {
                int j = i + L;
                
                dp[i][j] = INT_MAX;

                for (int k = i + 1; k < j; ++k) {
                    int triangle_weight = values[i] * values[k] * values[j];
                    
                    int current_score = triangle_weight + dp[i][k] + dp[k][j];
                    
                    dp[i][j] = min(dp[i][j], current_score);
                }
            }
        }

        return dp[0][n - 1];
    }
};