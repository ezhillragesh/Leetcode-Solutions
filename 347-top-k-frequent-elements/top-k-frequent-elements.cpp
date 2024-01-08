class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(auto i: nums) umap[i]++;
        int cnt=0,ans=0;
        vector <int> res;
        while(k>cnt){
            int max=INT_MIN;
            for(auto num:umap){
                if(num.second>max){
                    max=num.second;
                    ans=num.first;
                }
            }
            res.push_back(ans);
            cnt++;
            umap.erase(ans);
        }
        return res;
    }
};