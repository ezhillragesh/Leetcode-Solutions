class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int largest=INT_MIN;
       int secondLargest = INT_MIN;
       for(int num:nums){
           if(num>=largest){
               secondLargest=largest;
               largest=num;
               
           }
           else if(num > secondLargest){
               secondLargest=num;
           }
       }
       return ( (largest-1) * (secondLargest-1));
    }
};