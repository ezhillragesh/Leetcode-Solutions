class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map <int,pair<int,int>> umap;
        vector<int>win;
        vector<int>lost;
        for(auto it:matches){
            umap[it[0]].first++;
            umap[it[1]].second++;
        }
        vector<vector<int>> final;
        for(auto [i, v] :umap){
            if(v.second == 0) win.push_back(i);
            else if(v.second == 1) lost.push_back(i);
        }
        sort(win.begin(),win.end());
        sort(lost.begin(),lost.end());
        final.push_back(win);
        final.push_back(lost);
        return  final;
    }
};