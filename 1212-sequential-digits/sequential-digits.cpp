class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;

        for (int start = 1; start <= 9; ++start) {
            int num = start;
            for (int nextDigit = start + 1; nextDigit <= 9; ++nextDigit) {
                num = num * 10 + nextDigit;
                if (num >= low && num <= high) {
                    res.push_back(num);
                }
            }
        }

        sort(res.begin(), res.end());

        return res;
    }
};
