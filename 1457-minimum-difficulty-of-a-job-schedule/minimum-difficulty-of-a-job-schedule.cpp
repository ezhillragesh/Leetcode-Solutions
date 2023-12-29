class Solution {
public:
    int solve(vector<int>& jobd, int d, int i, vector<vector<int>>& dp){
        if(d <= 0 && i >= jobd.size()) return 0;
        if(d <= 0 || i >= jobd.size()) return 1e9;
        if(dp[i][d] != -1) return dp[i][d];
        int mx = 0, res = INT_MAX;
        for(int j = i; j < jobd.size(); ++j){
            mx = max(mx, jobd[j]);
            res = min(res, mx + solve(jobd, d-1, j + 1, dp));
        }
        return dp[i][d] = res;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        vector<vector<int>> dp(jobDifficulty.size()+1, vector<int> (d+1, -1));
        int ans = solve(jobDifficulty, d, 0, dp);  
        return ans<1e9?ans:-1;
    }
};