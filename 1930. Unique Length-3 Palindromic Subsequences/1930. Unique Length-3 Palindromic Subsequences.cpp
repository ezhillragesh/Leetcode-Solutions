class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count= 0, n = s.length();
        vector<int> firstIndex(26, n - 1), lastIndex(26, 0);
        for(int i = 0; i < n; i++) {
            firstIndex[s[i] - 'a'] = min(firstIndex[s[i] - 'a'], i);
            lastIndex[s[i] - 'a'] = i;
        }
        for(int i = 0; i < 26; i++) {
            count+= firstIndex[i] < lastIndex[i]? unordered_set<char>(s.begin() + firstIndex[i] + 1, s.begin() + lastIndex[i]).size(): 0;
        }
        return count;
    }
};
