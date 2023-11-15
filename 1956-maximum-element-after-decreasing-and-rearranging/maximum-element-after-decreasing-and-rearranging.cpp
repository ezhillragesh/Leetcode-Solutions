class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int prev=0;
        for(int i=0;i<arr.size();i++){
            prev=min(prev+1,arr[i]);
        }
        return prev;
    }
};