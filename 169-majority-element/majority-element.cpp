class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> umap;
        for(auto it : nums){
            umap[it]++;
        }
        for (auto & entry : umap) {
            if (entry.second > nums.size() / 2) {
                return entry.first;
            }
        }
        return -1;

    }
};