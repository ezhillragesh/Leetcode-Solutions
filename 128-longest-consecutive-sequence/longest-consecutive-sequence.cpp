#include <vector>
#include <unordered_set>
#include <algorithm>

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());

        int maxLength = 0;
        for (int num : nums) {
            if (numSet.find(num-1) == numSet.end()) { 
                int currentNum=num;
                int currentStreak=1;

                while (numSet.find(currentNum + 1)!=numSet.end()) {
                    currentNum+=1;
                    currentStreak+=1;
                }

                maxLength=max(maxLength, currentStreak);
            }
        }

        return maxLength;
    }
};
