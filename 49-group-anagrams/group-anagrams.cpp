class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> final;

        for (auto word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());
            final[sortedWord].push_back(word);
        }

        vector<vector<string>> result;
        for (auto group : final) {
            result.push_back(group.second);
        }

        return result;
    }
};
