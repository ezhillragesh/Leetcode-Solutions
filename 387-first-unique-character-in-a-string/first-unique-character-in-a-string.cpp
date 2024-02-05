class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> umap;
        vector<char> non;
        for(auto it:s){
            umap[it]++;
        }
        // char ch="";
        for(auto it:umap){
            cout<<it.first<<" "<<it.second<<endl;
            if(it.second==1)non.push_back(it.first);
        }

        for(int i=0;i<s.size();i++){
            for(int j=0;j<non.size();j++){
                if(s[i]==non[j]) return i;
            }
        }
        return -1;
    }
};