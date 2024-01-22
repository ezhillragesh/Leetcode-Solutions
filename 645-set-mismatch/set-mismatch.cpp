class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int dup=-1,miss=-1;
        vector <int> hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }

        for(int i=1;i<hash.size();i++){
            if(hash[i]==0) miss=i;
            if(hash[i]==2) dup=i;
        }

        return {dup,miss};
    }
};