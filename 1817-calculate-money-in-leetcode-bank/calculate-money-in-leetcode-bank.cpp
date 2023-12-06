class Solution {
public:
    int totalMoney(int n) {
        int res=0, start=1;
        while (n > 0) {
            for (int day = 0; day <min(n, 7); day++) {
                res += start + day;
            }
            
            n -= 7;
            start++;
        }
        
        return res;
    }
};