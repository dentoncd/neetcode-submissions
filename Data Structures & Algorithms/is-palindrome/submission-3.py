class Solution:
    def isPalindrome(self, s: str) -> bool:
        ns = "".join(c.lower() for c in s if c.isalnum())
        l = 0
        r = len(ns) - 1

        while (l < r):
            if ns[l] != ns[r]:
                return False
            else:
                l += 1
                r -= 1
        
        return True