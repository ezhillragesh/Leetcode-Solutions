class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> umap;
        vector <int> vec;
        for(auto it:arr) umap[it]++;

        for(auto it:umap){
            vec.push_back(it.second);
        }
        sort(vec.begin(),vec.end());
        for(int i=1;i<vec.size();i++){
            if(vec[i-1]==vec[i]) return false;
        }
        return true;
    }
};