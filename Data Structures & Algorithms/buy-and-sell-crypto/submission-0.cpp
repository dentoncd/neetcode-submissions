class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int max = 0;

        while (r < prices.size()) {
            int profit = prices[r] - prices[l];
            if (profit >= 0) {
                max = std::max(max, profit);
            }
            else {
                l = r;
            }
            r++;
        }
        return max;
    }
};
