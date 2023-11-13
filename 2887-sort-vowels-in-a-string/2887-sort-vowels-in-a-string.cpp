class Solution {
public:
    bool isVowel(char s){
        if(s=='a'|| s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O' ||s=='U') return true;
        return false;

    }
      
    string sortVowels(string s) {
        string onlyVowels="";
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                onlyVowels+=s[i];
            }
        }
        sort(onlyVowels.begin(),onlyVowels.end());
        int j=0;
         for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                s[i]=onlyVowels[j];
                j++;
            }
        }
        return s;
    }
};