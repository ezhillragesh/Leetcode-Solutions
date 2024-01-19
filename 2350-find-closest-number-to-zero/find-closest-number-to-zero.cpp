class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=nums.size()-1;i>=0;i--){
            int diff=abs(ans-0);
            int now=abs(nums[i]-0);

            if(diff>now) ans=nums[i];
            if(diff==now) ans=max(ans,nums[i]);
        }
        return ans;
    }
};