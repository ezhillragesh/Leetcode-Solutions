class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int choco=INT_MIN;
        for(int i=1;i < prices.size();i++){
            choco=prices[i-1] + prices[i];
            
            if(choco <= money) return money-choco;
        }
        return money;
    }
};