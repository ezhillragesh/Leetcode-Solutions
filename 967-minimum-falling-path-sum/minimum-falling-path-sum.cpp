class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        for(int i=matrix.size()-2;i>=0;i--){
            for(int j=0;j<matrix[i].size();j++){
                if(i+1 < matrix.size()){
                    int mini=matrix[i+1][j];
                    if(j>0) mini=min(mini,matrix[i+1][j-1]);
                    if(j < matrix[i].size()-1) mini=min(mini,matrix[i+1][j+1]);
                    matrix[i][j]+=mini;
                }

            }
        }

        int res=INT_MAX;
        for(int i=0;i<matrix.size();i++){
            if(matrix[0][i]<res) res=matrix[0][i];
        }
        return res;
    }
};