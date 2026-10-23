class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        ns = s.lower()
        nns = ""

        for c in ns:
            if c.isalnum():
                nns += c

        i = 0
        j = len(nns) - 1

        while i < j:
            if nns[i] != nns[j]:
                return False
            i += 1
            j -= 1

        return True    