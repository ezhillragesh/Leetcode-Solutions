class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
    vector <int> xPoints;
    for(auto it: points){
        xPoints.push_back(it[0]);
    }
    sort(xPoints.begin(),xPoints.end());
    int size=xPoints.size();
    // for(auto it: xPoints){
    //     cout<<it<<" ";
    // }
    int max=INT_MIN;
    for(int i=size-1;i>0;i--){
        if(max < xPoints[i]-xPoints[i-1]){
            max=xPoints[i]-xPoints[i-1];
        }

    }
    return max;    
}
    
};