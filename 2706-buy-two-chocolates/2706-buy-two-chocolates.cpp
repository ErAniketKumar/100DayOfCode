class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int p=prices[0]+prices[1];
        return money>=p?money-p: money;
    }
};