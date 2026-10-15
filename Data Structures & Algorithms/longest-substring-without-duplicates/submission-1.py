class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l, r, mx = 0, 0, 0
        st = set()
        while r < len(s):
            if s[r] not in st:
                st.add(s[r])
                mx = max(mx, r - l + 1)
                r += 1
            else:
                st.remove(s[l])
                l += 1
        return mx
        