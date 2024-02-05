class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> umap;
        vector<char> non;
        for(auto it:s){
            umap[it]++;
        }
        for(int i=0;i<s.size();i++){
            if(umap[s[i]]==1) return i;
        }
        return -1;
    }
};