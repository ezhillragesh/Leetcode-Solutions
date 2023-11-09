class Solution {
public:
    int countHomogenous(string s) {
        int m=1e9 +7;
        int sum=1;
        int succ=1;
        for(int i=1;i<s.size();++i){
            int curr=1;
            if(s[i-1]==s[i]) curr+=succ;
            sum=(sum % m)+(curr%m);
            succ=curr;
        }
        
        return (sum%m);
    }
};