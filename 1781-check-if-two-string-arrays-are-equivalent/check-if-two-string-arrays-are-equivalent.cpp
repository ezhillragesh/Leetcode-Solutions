class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sword1="",sword2="";
        for(int i=0;i<word1.size();i++){
            sword1+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            sword2+=word2[i];
        }
        if(sword1==sword2) return true;
        return false;
    }
};