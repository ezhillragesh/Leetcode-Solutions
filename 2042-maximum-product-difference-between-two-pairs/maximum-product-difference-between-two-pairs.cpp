class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest=INT_MIN;
        int sLargest=INT_MIN;
        int smallest=INT_MAX;
        int sSmallest=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                sLargest=largest;
                largest=nums[i];
            } 
            else if(nums[i]>sLargest){
                sLargest=nums[i];
            }
            if(nums[i]<smallest){
                sSmallest=smallest;
                smallest=nums[i];
            }
            else if(nums[i]<sSmallest){
                sSmallest=nums[i];
            }
        }

        int res=(largest*sLargest) - (smallest * sSmallest);
        return res;
    }
};