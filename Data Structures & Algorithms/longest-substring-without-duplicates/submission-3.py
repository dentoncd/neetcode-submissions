class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        seen = set()
        count = 0
        curr = 0
        mx = 0

        l, r = 0, 0

        while r < len(s):
            if s[r] in seen:
                seen.remove(s[l])
                count -= 1
                l += 1

            else:
                seen.add(s[r])
                count += 1
                mx = max(mx, count)
                r += 1
        
        return mx
                
