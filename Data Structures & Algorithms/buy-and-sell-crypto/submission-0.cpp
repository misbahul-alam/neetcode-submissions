class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minIndex = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < prices[minIndex]) {
                minIndex = i;
            }
            int current = prices[i] - prices[minIndex];
            if (current > profit) {
                profit = current;
            }
        }
        return profit;
    }
};