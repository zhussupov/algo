class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        if (m == 0)
            return 0;
        int n = obstacleGrid[0].size();
        if (n == 0)
            return 0;
        vector<vector<long long>> dp (m, vector<long long> (n, 0));
        if (obstacleGrid[m-1][n-1] == 0)
            dp[m-1][n-1] = 1;
        else
            return 0;
        for (int i = m - 2; i >= 0; i--)
            if (obstacleGrid[i][n-1] == 0)
                dp[i][n-1] = 1;
            else
                break;
        for (int i = n - 2; i >= 0; i--) 
            if (obstacleGrid[m-1][i] == 0)
                dp[m-1][i] = 1;
            else
                break;
        for (int i = m - 2; i >= 0; i--)
            for (int j = n - 2; j >= 0; j--) 
                if (obstacleGrid[i][j] == 0)
                    dp[i][j] = dp[i+1][j] + dp[i][j+1];
                else
                    dp[i][j] = 0;
        return (int)dp[0][0];
    }
};