class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int exSum=n*(n+1)/2;
        int aSum=0;
        int dup=0;
        int miss=0;
        vector <int> result;
        unordered_map<int,int> umap;
        
        for(auto it:nums){
            cout<<it<<" ";
            aSum+=it;
            umap[it]++;
        }
        cout<<"actual sum is : " <<aSum << "expected is : "<<exSum<<" ";

        for(auto it:umap){
            if(it.second == 2){
                dup=it.first;
                break;
            }
        }
       miss = exSum - (aSum - dup);


        result.push_back(dup);
        result.push_back(miss);

        return result;
    }
};