class Solution {
public:
    int hammingWeight(uint32_t n) {
        return (n == 0)?0:hammingWeight(n >> 1) + (n & 1);
    }
};
