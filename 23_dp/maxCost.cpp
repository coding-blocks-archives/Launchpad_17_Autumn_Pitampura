


int minCost(int matrix[][20], int m, int n){
    int dp[20][20];
    
    dp[0][0] = matrix[0][0];

    //setting the rows and cols
    for(int r = 1; r < m; ++r){
        dp[r][0] = dp[r-1][0] + matrix[r][0];
    }

    for(int c = 1; c < n; ++c){
        dp[0][c] = dp[0][c - 1] + matrix[0][c];
    }

    //base cases done above
    for(int r = 1; r < m; ++r){
        for(int c = 1; c < n; ++c){
            dp[r][c] = min(dp[r-1][c], dp[r][c-1]) + matrix[r][c];
        }
    }
    return dp[m-1][n-1];
}
