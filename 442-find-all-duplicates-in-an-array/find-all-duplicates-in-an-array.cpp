class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> res;
        unordered_map <int,int>umap;
        for(auto it : nums){
            umap[it]++;
        }

        for(auto it: umap){
            if(it.second == 2) res.push_back(it.first);
        }
        return res;
    }
};