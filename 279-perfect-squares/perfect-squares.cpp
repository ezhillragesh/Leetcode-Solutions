class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,n);
        dp[0] = 0;

        for(int i=1;i<=n;i++){
            for(int s=1;s*s<=i;s++){
                dp[i] = min(dp[i],1+dp[i-(s*s)]);
            }
        }

        return dp[n];
    }
};