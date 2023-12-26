class Solution
{
public:
    vector<vector<int>> dp;
    int mod = 1e9 + 7;
    int maxDiceFace;

    long long solve(int n, int target)
    {
        if (n == 0)
        {
            return target == 0;
        }

        if (dp[n][target] != -1)
        {
            return dp[n][target];
        }

        long long ans = 0;

        for (int face = 1; face <= maxDiceFace && target - face >= 0; face++)
        {
            ans = (ans + solve(n - 1, target - face)) % mod;
        }

        return dp[n][target] = ans % mod;
    }
    int numRollsToTarget(int n, int k, int target)
    {
        maxDiceFace=k;
        dp = vector<vector<int>>(n + 2, vector<int>(target + 2, -1));
        return solve(n, target) % mod;
    }
};