class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> res (img.size(), vector<int>(img[0].size(), 0));
        for(int row=0;row<img.size();row++){
            for(int col=0;col<img[0].size();col++){
                int totalSum=0,cnt=0;
                for(int x=max(0,row-1); x < min<int>(img.size(),row+2); x++ ){
                    for(int y = max(0,col-1); y < min<int>(img[0].size(),col+2); y++){
                        totalSum+=img[x][y];
                        cnt+=1;
                    }
                }
                 res[row][col]=totalSum/cnt;
            }
           
           
        }
        return res;
    }
};