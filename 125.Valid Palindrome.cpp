class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        
        for(int i=0;i<s.size();++i){
            if(isalnum(s[i])) result+=s[i];
            
        }
        transform(result.begin(), result.end(), result.begin(), ::tolower);
        int n=result.size();
        for(int i=0;i<result.size();++i){
            if(result[i]!=result[n-i-1])return false;
        }
        return true;
        
    }
};
