class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int size =nums.size();
        vector<int> res(size);
        
        int leftSum = 0;
        int rightSum = accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0 ;i < size; i++) {
            res[i] = i *nums[i] -leftSum+rightSum-(size-i) *nums[i];
            leftSum += nums[i];
            rightSum -= nums[i];
        }

        return res;
    }
};


/*
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int size=nums.size();
        vector <int> res;
        int temp=0;
        for(int i=0;i<size;i++){
            
            int sum=0;
            for(int j=0;j<size;j++){
                temp=abs(nums[i]-nums[j]);
                sum+=temp;
            }
            res.push_back(sum);
        }
        return res;
    }
};
*/