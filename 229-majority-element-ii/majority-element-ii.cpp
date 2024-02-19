class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector <int> result;
        int size=floor((nums.size())/3);
        unordered_map<int,int> umap;
        for(auto it:nums) umap[it]++;

        for(auto it:umap){
            if(it.second>size) result.push_back(it.first);
        }

        return result;
    }
};