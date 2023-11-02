#include <cstdlib>
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newWord="";
        int total=word1.size()+word2.size();
        for(int i=0;i<total;i++){
            if(i<word1.size()) newWord+=word1[i];
             if(i<word2.size()) newWord+=word2[i];
        }
        
        return newWord;
    }
};