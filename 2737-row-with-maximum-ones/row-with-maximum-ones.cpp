class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector <int> res;
        int maxr=INT_MIN;
        int rowmax=0;
        for(int row=0;row<mat.size();row++){
            int count=0;
            for(int col=0;col<mat[0].size();col++){
                if(mat[row][col]==1) count++;
            }
            if (count > maxr) {
                
                maxr = count;
                rowmax = row;
            } else if (count == maxr && row < rowmax) {
               
                rowmax = row;
            }

        }
        res.push_back(rowmax);
        res.push_back(maxr);
        return res;
    }
};