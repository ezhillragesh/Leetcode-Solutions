class Solution {
public:
    int trap(vector<int>& height) {
        int max=INT_MIN;
        int water=0;
        int size=height.size();
        vector <int> left(size,0);
        vector <int> right(size,0);
        
        for(int i=0;i<size;i++){
            if(height[i] >= max) max=height[i];
            left[i]=max;
        }
        max=INT_MIN;
        for(int i= size-1; i>=0 ;i--){
            if(height[i] >= max) max=height[i];
            right[i]=max;
        }

        for(int i=0;i<size;i++){
            water+=(min(left[i],right[i])-height[i]);
        }
        return water;

    }
};