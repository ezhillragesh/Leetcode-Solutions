class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    vector <int> xPoints;
    for(auto it: points){
        xPoints.push_back(it[0]);
    }
    sort(xPoints.begin(),xPoints.end());
    int size=xPoints.size();
    int ans=INT_MIN;
    for(int i=size-1;i>0;i--){
        ans=max(ans,xPoints[i]-xPoints[i-1]);

    }
    return ans;    
}
    
};