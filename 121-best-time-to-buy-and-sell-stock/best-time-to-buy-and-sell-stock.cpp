class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector <int> temp =prices;
        int maxProfit = INT_MIN;
        int minimum = INT_MAX;
        for (int i=0; i< prices.size(); i++ ){
            minimum = min(minimum ,prices[i]);
            maxProfit = max(maxProfit,prices[i] - minimum );
        }
        return maxProfit;


    }
};