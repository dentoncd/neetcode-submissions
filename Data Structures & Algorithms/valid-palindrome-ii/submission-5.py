class Solution:
    def validPalindrome(self, s: str) -> bool:
        def isPalindrome(lst):
            for i in range(len(lst)):
                word = lst[i]
                l, r = 0, len(word) - 1
                while l < r:
                    if word[l] != word[r]:
                        lst[i] = False
                        break
                    l += 1
                    r -= 1
                else:
                    return True

            return False
        
        lx = []
        temp = ""

        for idx in range(len(s)):
            for j in range(len(s)):
                if idx == j:
                    continue
                else:
                    temp += s[j]
            lx.append(temp)
            temp = ""
        
        return isPalindrome(lx)