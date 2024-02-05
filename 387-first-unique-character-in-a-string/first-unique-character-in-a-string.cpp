class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int> umap(26, 0);
        for(auto ch : s){
            umap[ch - 'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(umap[s[i]-'a']==1) return i;
        }
        return -1;
    }
};