class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector <int> map(26,0);
        int res=0;
        for(auto c:chars){
            map[c-'a']++;
        }
        for(auto word: words){
            vector <int> count=map;
            int flag=0;
            for(auto c: word){
                if(!count[c-'a']){
                    flag=1;
                    break;
                }
                count[c-'a']--;
            }
            if(flag==0){
                res+=word.length();
            }

        }
        return res;
 
        }
    
};