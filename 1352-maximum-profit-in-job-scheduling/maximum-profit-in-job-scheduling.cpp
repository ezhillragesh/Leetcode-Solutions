class Solution {
public:
   int binarySearch(vector<pair<int, pair<int, int>>>& jobs, int index) {
    int low = 0, high = index - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (jobs[mid].first <= jobs[index].second.first) {
            if (jobs[mid + 1].first <= jobs[index].second.first) {
                low = mid + 1;
            } else {
                return mid;
            }
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    int n = startTime.size();
    vector<pair<int, pair<int, int>>> jobs;

    for (int i = 0; i < n; i++) {
        jobs.push_back({endTime[i], {startTime[i], profit[i]}});
    }

    
    sort(jobs.begin(), jobs.end());

  
    vector<int> dp(n, 0);
    dp[0] = jobs[0].second.second;

    for (int i = 1; i < n; i++) {
        int currentProfit = jobs[i].second.second;

        int prevCompatibleJobIndex = binarySearch(jobs, i);

        if (prevCompatibleJobIndex != -1) {
            currentProfit += dp[prevCompatibleJobIndex];
        }

       
        dp[i] = max(dp[i - 1], currentProfit);
    }

    return dp[n - 1];
}
};