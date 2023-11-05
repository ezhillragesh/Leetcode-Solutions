class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numToIndex.find(complement) != numToIndex.end()) {
               
                result.push_back(numToIndex[complement]);
                result.push_back(i);
                return result;
            }

            numToIndex[nums[i]] = i; 
        }

        return result;
    }
};
