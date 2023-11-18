class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=0;
        int sum=0;
        long total=0;
        while(r<nums.size()){
            total+=nums[r];
            while(static_cast<long>(nums[r]) * (r-l+1) > total+ (k)){
                total-=nums[l];
                l++;
            }
            sum=max(sum,r-l+1);
            r++;
        }
        return sum;
    }
};