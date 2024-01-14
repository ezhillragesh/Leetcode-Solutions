class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> res;
        for(int i=0;i<words.size();i++){
            int flag=0;
            for(char it:words[i]){
                if(it==x) flag=1;
            }
            if(flag==1) res.push_back(i);
        }
        return res;
    }
};