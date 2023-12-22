class Solution {
public:
    int maxScore(string s) {
        int ans=INT_MIN;
        int zeroCount=0;
        int oneCount=0;
        for(char it:s){
            if(it=='1')  oneCount++;
        }
        for(int i = 0; i < s.length() - 1; i++){
            if(s[i]=='0') zeroCount++;
            else oneCount--;
            ans=max(ans,zeroCount+oneCount);
        }
        return ans;
    }
        
};
// cout<<"pre : "<<prefixSum<<" "<<"cnt :"<<zeroCount;