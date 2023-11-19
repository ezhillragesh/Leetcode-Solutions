class Solution {
public:
    int reductionOperations(std::vector<int>& nums) {
        sort(nums.begin(), nums.end(),greater<int>());
        int res = 0;
        int size = nums.size();

        for (int i = 1; i < size; i++) {
            if (nums[i] < nums[i - 1]) {
                res += i;
            }
        }

        return res;
    }
};
