class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid = nums.size() / 2;
        int maxPairSum = 0;

        for (int i = 0; i < mid; i++) {
            int sum = nums[i] + nums[nums.size() - 1 - i];
            maxPairSum =max(maxPairSum, sum);
        }

        return maxPairSum;
    }
};