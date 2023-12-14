class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        vector<int> onerow(m,0);
        vector <int> onecol(n,0);
        vector<int> zerorow(m,0);
        vector <int> zerocol(n,0);
        int r0,r1;
        for(int i=0;i<m;i++){
            r0=0,r1=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) r0++;
                else r1++;
            }
            onerow[i]=r1;
            zerorow[i]=r0;
        }
        int c0,c1;
        for(int i=0;i<n;i++){
            c0=0,c1=0;
            for(int j=0;j<m;j++){
                if(grid[j][i]==0) c0++;
                else c1++;
            }
            onecol[i]=c1;
            zerocol[i]=c0;
        }

        vector<vector<int>> diff(m,vector<int> (n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diff[i][j] = onerow[i] + onecol[j] - zerorow[i] -zerocol[j];
            }
        }
        return diff;
        
    }
};