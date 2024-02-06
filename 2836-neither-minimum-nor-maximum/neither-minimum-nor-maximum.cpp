class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size()-1;i++){
            return nums[i];
        }
        return -1;
    }
};