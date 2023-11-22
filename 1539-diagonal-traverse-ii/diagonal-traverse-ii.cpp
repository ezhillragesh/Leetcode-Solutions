#include <vector>

class Solution {
public:
    std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& nums) {
        std::vector<std::vector<int>> res;
        int m = nums.size(), size = 0;

        for (int i = 0; i < m; i++) {
            int n = nums[i].size(), x = i;
            for (int j = 0; j < n; j++) {
                if (res.size() == x) {
                    res.push_back(std::vector<int>());
                }
                res[x].push_back(nums[i][j]);
                x++;
                size++;
            }
        }

        std::vector<int> ans(size);
        int idx = 0;

        for (int i = 0; i < res.size(); i++) {
            for (int j = res[i].size() - 1; j >= 0; j--) {
                ans[idx] = res[i][j];
                idx++;
            }
        }

        return ans;
    }
};
