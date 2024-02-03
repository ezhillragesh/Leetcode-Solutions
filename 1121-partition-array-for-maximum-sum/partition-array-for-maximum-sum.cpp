class Solution {
public:

    int K;
    vector<int> store;
    int dp[501];

    int solve(int start)
    {

        if(start>=store.size())
        {
            return 0;
        }

        if(dp[start]!=-1)
        {
            return dp[start];
        }

        int ans = 0;
        int largest = 0;
        for(int i=1; i<=K; i++)
        {
            if(start+i > store.size())
            {
                break;
            }
            largest = max(largest, store[start+i-1]);
            int currAns = largest*i + solve(start+i);
            ans = max(ans, currAns);
        }

        return dp[start] = ans;
    }

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        K = k;
        store = arr;
        memset(dp, -1, sizeof(dp));

        return solve(0);
    }
};