class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        temp_list = []
        l = []

        for st in strs:
            temp_list.append("".join(sorted(st)))
            temp_list.append(st)
            l.append(temp_list)
            temp_list = []

        d = {}

        for k, v in l:
            if k not in d:
                d[k] = []
            d[k].append(v)

        return [*d.values()]