class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int size=arr.size();
        unordered_map <int,int> umap;
        for(auto it : arr){
            umap[it]++;
        }

        for(auto num:umap){
            if(num.second > size/4){
                return num.first;
            }
        }

        return -1;
    }
};