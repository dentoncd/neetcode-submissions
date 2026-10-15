class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, r, mx = 0, 1, 0
        while r < len(prices):
            profit = prices[r] - prices[l]
            if profit >= 0:
                mx = max(mx, profit)
            else:
                l = r
            r += 1
        return mx

        