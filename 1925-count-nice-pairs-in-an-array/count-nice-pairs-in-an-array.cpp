class Solution {
public:
    int rev(int num) {
        int res = 0, temp;
        while (num != 0) {
            temp = num % 10;
            res = (res * 10) + temp;
            num = num / 10;
        }
        return res;
    }

    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int cnt =0;
        int m = 1e9 + 7;
        unordered_map<int, int>map;

        for (int i = n -1;i>= 0; i--) {
            int diff = nums[i] - rev(nums[i]);
            cnt = (cnt + map[diff]) % m;
            map[diff]++; 
        }

        return cnt;
    }
};
