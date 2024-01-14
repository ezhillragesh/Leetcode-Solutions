class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int size=nums.size();
        vector <int> res;
        vector <int> freq;
        vector <int> val;
        for(int i=0;i<size;i++){
            if(i%2==0) freq.push_back(nums[i]);
            else val.push_back(nums[i]);
        }
        for(int i=0;i<size/2;i++){
            for(int j=0;j<freq[i];j++){
                res.push_back(val[i]);
            }
        }
        
        return res;
    }
};