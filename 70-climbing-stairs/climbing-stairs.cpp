class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1)  return 1;
        vector<int> steps(n+1); //size m  zero
        steps[0]=steps[1]=1;
        steps[2]=2;
        for(int i=3;i<=n;i++)steps[i]=steps[i-1]+steps[i-2];
        return steps[n];


    }
};