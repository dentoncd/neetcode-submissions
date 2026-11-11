class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nx = (sorted(set(nums)))
        count = 1
        mx = 1

        if len(nums) == 0:
            return 0

        for i in range(1, len(nx)):
            if abs(nx[i] - nx[i - 1]) == 1:
                count += 1
                mx = max(mx, count)
            else:
                count = 1
        
        return mx