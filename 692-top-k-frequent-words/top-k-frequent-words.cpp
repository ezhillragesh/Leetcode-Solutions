class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector <string> res;
        map<string,int> countMap;
        for(int i=0;i< words.size();i++){
            countMap[words[i]]++;
        }
        int max,cnt=0;
        string ans="";
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