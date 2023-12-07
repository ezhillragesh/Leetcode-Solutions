class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();

        int ctr = 1;  
        int tSize = 1;  

        for (int i = 1; i < size; i++) {
            if (nums[i - 1] == nums[i]) {
                ctr++;
                if (ctr <= 2) {
                    nums[tSize] = nums[i];
                    tSize++;
                }
            } else {
                nums[tSize] = nums[i];
                tSize++;
                ctr = 1;  
            }
        }

        return tSize;
    }
};
