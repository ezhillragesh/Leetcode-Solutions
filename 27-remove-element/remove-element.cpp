class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size =nums.size();
        vector <int> temp;
        for(int i=0;i<size;i++){
            if(nums[i]!=val){
                temp.push_back(nums[i]);

            }
        }
        int tSize=temp.size();
        for(int i=0;i<size;i++){
          if(i<tSize){
            nums[i]=temp[i];
          }
          else{
            nums[i]=INT_MIN;
          }
        }
        return tSize;
    }
};