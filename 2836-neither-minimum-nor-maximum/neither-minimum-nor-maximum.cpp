class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;
        sort(nums.begin(),nums.end());
       if(nums[1]) return nums[1];
            
        
        return -1;
    }
};