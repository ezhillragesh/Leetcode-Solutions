class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size(),count=0;
        int diff,i,j;
        for(i=0;i<=n-3;i++)
        {
            diff = nums[i+1]-nums[i];
            for(j=i+1;j<n;j++)
            {
                if(nums[j]-nums[j-1]==diff)
                {
                    if((j-i+1)>=3)
                    {
                        count++;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        return count;
    }
};