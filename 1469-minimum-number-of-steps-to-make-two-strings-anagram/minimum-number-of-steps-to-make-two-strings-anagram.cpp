class Solution {
public:
    int minSteps(string s, string t) {
        vector <int> hash1(26,0);
        vector <int> hash2(26,0);
        int diff=0;
        for(auto it:s) hash1[it-'a']++;
        for(auto it:t) hash2[it-'a']++;
        for(int i=0;i<26;i++){
            if(hash1[i]>hash2[i]){
                diff+=(hash1[i]-hash2[i]);
            }
        }
        return diff;


    }
};

// unordered_map<char,int> umap1;
//         unordered_map<char,int> umap2;
//         for(auto it:s) umap1[it]++;
//         for(auto it:t) umap2[it]++;
        
//         for(auto it:umap1){
//             cout<<it.first<<" "<<it.second;
//         }
//         cout<<endl;
//         for(auto it:umap2){
//             cout<<it.first<<" "<<it.second;
//         }
//         cout<<endl;
//         return -1;