class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> umap;
        for (auto it : arr) {
            umap[it]++;
        }

        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto& [num, freq] : umap) {
            pq.push(freq);
        }

        while (k > 0 && !pq.empty()) {
            int top = pq.top();
            pq.pop();
            if (k >= top) {
                k -= top;
            } else {
                pq.push(top - k);
                k = 0;
            }
        }

        return pq.size();
    }
};
