class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int z=nums[0];
        int y=nums[1];
        int w=nums[nums.size()-1];
        int x=nums[nums.size()-2];
        int res= (w*x)-(y*z);
        return res;
    }
};