class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxi=-1;
        for(int i=0;i<s.size();i++){
             for(int j=i+1;j<s.size();j++){
                 if(s[i]==s[j]) maxi=max(maxi,j-i-1);
            }
        }
        return maxi;

    }
};