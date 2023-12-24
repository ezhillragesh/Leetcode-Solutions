class Solution {
public:
    int minOperations(string s) {
        int opr[2] = {0};

        for (int i = 0; i<s.size(); i += 2) opr[s[i] == '0']++;
        for (int i = 1; i < s.size(); i += 2) opr[s[i] == '1']++;

        return min(opr[0], opr[1]);
    }
};
