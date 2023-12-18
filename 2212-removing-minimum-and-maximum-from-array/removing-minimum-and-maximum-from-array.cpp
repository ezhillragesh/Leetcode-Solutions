class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int largestIndex=0,smallestIndex=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>nums[largestIndex] )largestIndex=i;
            if(nums[i]<nums[smallestIndex])smallestIndex=i;
        }
        int front=max(largestIndex+1,smallestIndex+1);
        int back=max(n-largestIndex,n-smallestIndex);
        int both=min(largestIndex+1,smallestIndex+1) +  min(n-largestIndex,n-smallestIndex);

        int final =min(min(front,back),both);
        return final;
    }
};