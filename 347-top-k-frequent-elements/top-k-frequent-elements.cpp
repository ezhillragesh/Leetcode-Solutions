
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> res;
        map <int,int> countMap;
        for(int i=0; i<nums.size(); i++){
            countMap[nums[i]]++;
        }

        int max,ans=0,cnt=0;
        while(cnt<k){
            max=0;
            for(auto i :countMap){
                if(i.second > max){
                    max=i.second;
                    ans=i.first;
                }
            }
            res.push_back(ans);
            countMap.erase(ans);
            cnt++;
        }
        return res;
        
        
            
        

    }

    
};