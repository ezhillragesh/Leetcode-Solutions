class Solution {
    public:
    int consecutiveNumbersSum(int N) {
        int res = 0;
        for (int i = 1; (double)(N)/i > i/2.0; i++) {
            if (i % 2 == 1 && N % i == 0) res++;
            else if (i % 2 == 0 && N % i == i/2) res++;
        }
        return res;
    }
};