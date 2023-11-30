class Solution {
public:
    int minimumOneBitOperations(int n) {
        int t = 32;
        while (t /= 2) {
            n ^= (n >> t);
        }
        return n;
}
};