class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector <string>> groupMap;
        for(auto st:strs){
            string temp=st;
            sort(st.begin(),st.end());
            groupMap[st].push_back(temp);
        }

        for(auto it: groupMap)result.push_back(it.second);
        return result;
    }
   
};