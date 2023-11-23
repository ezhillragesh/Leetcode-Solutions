class Solution {
public:
    bool isAP(vector <int> &temp,int n){
        if (n == 1) return true;

        
        int d = temp[1] - temp[0];
        for (int i = 2; i < n; i++)
            if (temp[i] - temp[i - 1] != d) return false;
 
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int size=l.size();
        vector <bool> res;
        for(int i=0;i<size;i++){
            vector <int> temp;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());
            int tSize=temp.size();
            bool ans=isAP(temp,tSize);
            res.push_back(ans);
            temp.clear();

        }
        return res;
    }
};