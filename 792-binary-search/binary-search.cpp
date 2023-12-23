class Solution {
public:
    int binarySearch(vector <int> & arr,int start,int end,int target){
        if(start<=end){
            int mid=(start+end)/2;
        if(arr[mid]== target) return mid;
        else if(target < arr[mid]) return binarySearch(arr,start,mid-1,target);
        else return binarySearch(arr,mid+1,end,target);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int ans=binarySearch(nums,0,nums.size()-1,target);
        return ans;
    }
};