class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int end=nums.size();
        int ans=0;
        for(int i=0;i<=end;i++){
            if(find(nums.begin(),nums.end(),i)!=nums.end()) continue;
            else ans=i;
        }
        return ans;
    }
};
