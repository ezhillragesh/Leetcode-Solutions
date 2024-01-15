class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int count=0;
        if(maxi==mini) return 0;
        for(int it:nums){
            if(it!=maxi && it!=mini) count++;
        }
        return count;
    }
};