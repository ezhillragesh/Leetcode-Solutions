class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        //Handle empty input
        if (nums.size() == 0) return {};

        // Sort the array
        sort(nums.begin(), nums.end());

        // Initialize arrays for dynamic programming
        vector<int> dp(nums.size(), 1);  // Lengths of largest divisible subsets ending at each index
        vector<int> prev_index(nums.size(), -1);  // Indices of previous numbers in the subsets

        // Find the largest divisible subset lengths
        int maxi = 0;  // Index of the longest subset found so far
        for (int i = 1; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    prev_index[i] = j;
                    if (dp[i] > dp[maxi]) {
                        maxi = i;  // Update index of the longest subset
                    }
                }
            }
        }

        // Reconstruct the largest divisible subset
        vector<int> result;
        while (maxi >= 0) {
            result.push_back(nums[maxi]);
            maxi = prev_index[maxi];
        }

        // Reverse the result to get ascending order
        reverse(result.begin(), result.end());
        return result;
    }
};