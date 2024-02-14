class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> pvec(0,nums.size()/2);
        vector <int> nvec(0,nums.size()/2);
        vector <int> res(0,nums.size());
       for(auto it:nums){
           if(it>0) pvec.push_back(it);
           else nvec.push_back(it);
       }
       int pv=0,nv=0;
       for(int i=0;i<nums.size();i++){
           if(i%2==0){  
               res.push_back(pvec[pv]);
               pv++;
           }
           else{
               res.push_back(nvec[nv]);
               nv++;
           }

           
       }
       return res;

    }
};