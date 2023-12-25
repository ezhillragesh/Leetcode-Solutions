class Solution {
public:
    
    int sol(string s,int i,int n,vector<int>&dp)
    {
        if(i==n) return 1;
        int res=0;
        if(dp[i]!=-1) return dp[i];
        if(s[i]!='0')
        res += sol(s,i+1,n,dp);
        if(i+2<=n && s[i]!='0'){
            if((s[i]-'0')*10 + (s[i+1]-'0')<=26)
            res+= sol(s,i+2,n,dp);
        }
        return dp[i]=res;
    }

    int numDecodings(string s) {
         int n = s.size();
         vector<int>dp(n,-1);
         return sol(s,0,n,dp); 
    }
};