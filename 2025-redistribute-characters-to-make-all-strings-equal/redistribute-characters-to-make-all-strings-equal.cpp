class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int size=words.size();
        bool flag= true;
        unordered_map <char,int> umap;
        for(auto word : words){
            for(auto ch :word){
                umap[ch]++;
            }
        }

        for(auto it: umap){
            cout<<it.first<<" "<<it.second<<endl;
            
            if(it.second % size !=0){
                flag=false;
            }
        }
        return flag;
    }
};