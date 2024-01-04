class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map <int,int> umap;
        for(auto it:nums){
            umap[it]++;
        }

        int opr=0;

        for(auto it:umap){
            if(it.second<2) return -1;
            else{
                opr=opr+ ((it.second+2)/3);
            }
            

        }
        return opr;
    }
};