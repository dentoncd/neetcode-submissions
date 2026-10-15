class Solution:
    def scoreOfString(self, s: str) -> int:
        list = []
        for i in range(1, len(s)):
            list.append(abs(int(ord(s[i])) - int(ord(s[i - 1]))))
        return sum(list)
