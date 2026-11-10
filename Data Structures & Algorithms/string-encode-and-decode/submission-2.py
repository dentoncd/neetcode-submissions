class Solution:

    def encode(self, strs: List[str]) -> str:
        temp = ""
        res = ""
        d = 'ñ'

        for i in range(len(strs)):
            for j in range(len(strs[i])):
                temp += chr(ord(strs[i][j]) + 1)

            res += temp + d
            temp = ""

        return res

    def decode(self, s: str) -> List[str]:
        res = []
        temp = ""
        for i in range(len(s)):
            if s[i] == "ñ":
                res.append(temp)
                temp = ""
                continue
            temp += chr(ord(s[i])-1)

        return res