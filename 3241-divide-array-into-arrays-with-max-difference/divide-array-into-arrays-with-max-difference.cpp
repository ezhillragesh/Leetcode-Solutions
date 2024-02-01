class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        if(nums.size()%3!=0) return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> final;
        int flag=1;
        for(int i=0;i<nums.size();i=i+3){
            vector <int> temp;
            for(int j=i;j<i+3;j++){
                temp.push_back(nums[j]);
            }
            final.push_back(temp);
        }
        
        for(int i=0;i<final.size();i++){
            for(int j=1;j<final[i].size()-1;j++){
                if( (abs(final[i][j-1]-final[i][j+1])) > k){
                    return {};
                }
            }
        }
        
        return final;
    }
};