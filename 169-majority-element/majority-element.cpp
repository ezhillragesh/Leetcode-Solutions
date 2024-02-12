class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return nums[0];
        unordered_map<int, int> freq;
        for(int x:nums){
            if (freq.count(x)==0) freq[x]=1;
            else{
                freq[x]++;
                if (freq[x]>n/2) return x;
            }
        }
        return INT_MIN;
    }
};