class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1
        mx, b, h = 0, 0, 0

        while l < r:
            b = r - l
            h = min(heights[l], heights[r])
            mx = max(mx, b * h)
            if heights[l] >= heights[r]:
                r -= 1
            else:
                l += 1

        return mx