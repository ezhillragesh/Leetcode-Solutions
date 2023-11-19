class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        // int j=k-nums.size()+1;
        return (nums[k-1]);
    }
};