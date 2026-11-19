class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l, r = 0, 1
        mx = 0

        while r < len(prices):
            if prices[r] - prices[l] <= 0:
                l = r
                r += 1
            else:
                mx = max(mx, prices[r] - prices[l])
                r += 1
        
        return mx
        
