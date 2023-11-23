class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
     int size=arr.size();
     if(size==1) return true;
     sort(arr.begin(),arr.end());
     int diff=arr[1]-arr[0];
     for(int i=2;i<size;i++) if(arr[i]-arr[i-1] !=diff) return false;
     return true;
     }
};