class Solution {
public:
    int knightDialer(int n) {
        
        if(n==1) return 10;
        unordered_map<int,vector<int>>um;
        um[0]={4,6};
        um[1]={6,8};
        um[2]={7,9};
        um[3]={4,8};
        um[4]={0,3,9};
        um[6]={0,1,7};
        um[7]={2,6};
        um[8]={1,3};
        um[9]={2,4};

        vector <int> v(10,1);
        for(int i=2;i<=n;i++){
            vector <int> temp(10);
            for(auto[key,val]: um){
                for(auto j:val){
                    temp[key]=(temp[key]+v[j] )% 1000000007;
                }
            }
            v=temp;
        }
        int ans=0;
        for(auto i:v){
            ans=(ans+i)  % 1000000007;
        }
        return ans;
    }
}; 