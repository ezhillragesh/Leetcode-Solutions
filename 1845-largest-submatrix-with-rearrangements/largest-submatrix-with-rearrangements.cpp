class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 0;
        for (int row = 0; row<m; row++){
            for(int col = 0; col<n; col++){
                if(matrix[row][col] != 0 && row > 0){matrix[row][col] += matrix[row-1][col];}
            }
            
            vector<int> res = matrix[row];
            sort(res.begin(), res.end(), greater());
            for(int i=0; i<n;i++){
                ans = max(ans,res[i] * (i+1));
            }
        }
        return ans;
    }
};