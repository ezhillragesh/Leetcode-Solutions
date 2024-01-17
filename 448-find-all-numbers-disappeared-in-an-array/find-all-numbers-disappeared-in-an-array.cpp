class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_set <int> nset (nums.begin(),nums.end());
       vector <int> result;
       for(int i=1;i<=nums.size();i++){
           if(nset.find(i)== nset.end()) result.push_back(i);
       }
       return result;
    }
};