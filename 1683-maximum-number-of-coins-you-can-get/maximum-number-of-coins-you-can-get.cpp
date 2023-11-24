class Solution {
public:
    int maxCoins(vector<int>& piles) {
      sort(piles.begin(), piles.end());
      int res = 0, size = piles.size();
      for (int i = size / 3; i < size; i += 2) res += piles[i];
       return res;
    }
};