class Solution {
public:
const int modu=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
      int n=arr.size();
vector<int>sum(n,0);
sum[n-1]=arr[n-1];
int mini=arr[n-1];
for(int i=n-2;i>=0;i--){
   int mnm=arr[i];
   if(mnm<=mini){
       sum[i]+=(n-i)*arr[i];
   }
   else{
       sum[i]+=arr[i];
     //  sum[i]+=sum[i+1];
     int j=i+1;
     while(j<n && arr[i]<arr[j]){
         sum[i]+=arr[i];
         j++;
     }
     if(j<n)
     sum[i]+=sum[j];
   }
   mini=min(mini,arr[i]);
}
int ans=0;
for(int i=0;i<n;i++){
    ans=((ans%modu)+(sum[i]%modu))%modu;;
}
return ans;
    }
};