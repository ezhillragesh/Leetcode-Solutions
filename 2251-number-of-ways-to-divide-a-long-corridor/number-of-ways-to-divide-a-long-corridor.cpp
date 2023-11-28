class Solution {
public:
    int numberOfWays(string corridor) {
        int zero=0;
        int one=0;
        int two=1;
        for(char obj:corridor){
            if(obj == 'S'){
                zero=one;
                swap(one,two);
            }
            else two=(two+zero) % 1000000007;
        }
        return zero;
    }
};