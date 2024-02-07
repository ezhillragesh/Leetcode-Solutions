class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        vector<pair<int, char>> sortedFreq;

        
        for (char c : s) {
            freq[c]++;
        }

       
        for (auto it : freq) {
            sortedFreq.push_back({it.second, it.first});
        }

       
        sort(sortedFreq.begin(), sortedFreq.end(), greater<pair<int, char>>());

        
        string sortedStr = "";
        for (auto p : sortedFreq) {
            sortedStr.append(p.first, p.second);
        }

        return sortedStr;
    }
};
