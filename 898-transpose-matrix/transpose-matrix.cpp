class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        if(matrix.size() ==0 || matrix[0].size()==0) return matrix;
        vector<vector<int>> res(matrix[0].size(), vector<int>(matrix.size(), 0));
        for(int row=0;row<matrix.size();row++){
            
            for(int col=0;col<matrix[row].size();col++){
                res[col][row]=matrix[row][col];
            }
            
        }
        return res;
    }
};