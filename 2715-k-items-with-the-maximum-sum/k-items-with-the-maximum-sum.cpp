class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int result=0;
        while(numOnes>0 && k >0){
            numOnes--;
            result++;
            k--;
        }
        while(numZeros>0 && k >0){
            numZeros--;
            
            k--;
        }
        while(numNegOnes>0 && k >0){
            numNegOnes--;
            result--;
            k--;
        }

        return result;
    }
};