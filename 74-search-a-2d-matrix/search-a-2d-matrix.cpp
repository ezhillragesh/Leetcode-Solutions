class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector <int> arr;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                arr.push_back(matrix[i][j]);
            }
        }
        int start=0;
        int end=arr.size()-1;
        
        
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==target) return true;
            else if(target < arr[mid]) end=mid-1;
            else start=mid+1;
        }
        return false;

        
    }
};