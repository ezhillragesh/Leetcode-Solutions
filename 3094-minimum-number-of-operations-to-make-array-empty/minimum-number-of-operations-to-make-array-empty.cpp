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
            if(it.second %3 ==0) opr+=it.second/3;
            else{
                if(it.second %3 ==1 || it.second % 3==2){
                    opr+=1+it.second/3;
                }
               
            }
            

        }
        return opr;
    }
};