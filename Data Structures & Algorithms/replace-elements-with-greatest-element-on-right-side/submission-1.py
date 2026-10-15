class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        res = []
        res_elem = -1

        for i in range(len(arr)):
            for j in range(i + 1, len(arr)):
                res_elem = max(res_elem, arr[j])
            res.append(res_elem)
            res_elem = -1

        return res
        