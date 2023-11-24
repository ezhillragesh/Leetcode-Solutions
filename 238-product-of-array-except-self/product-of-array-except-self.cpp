class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> leftProducts(size, 1);
        vector<int> rightProducts(size, 1);

        
        int leftProduct = 1;
        for (int i =1; i < size; i++) {
            leftProduct *= nums[i - 1];
            leftProducts[i] = leftProduct;
        }

        
        int rightProduct = 1;
        for (int i = size - 2; i >=0;i--) {
            rightProduct *= nums[i+1];
            rightProducts[i] = rightProduct;
        }
        vector<int> result(size);
        for (int i = 0; i < size; i++) {
            result[i] = leftProducts[i] * rightProducts[i];
        }

        return result;
    }
};
