class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        left = [1]
        right = [1]
        s = 1
        for i in range(1, len(nums)):
            s *= nums[i - 1]
            left.append(s)


        s = 1

        for i in range(len(nums) - 2, -1, -1):
            s *= nums[i + 1]
            right.append(s)

        new_right = list(reversed(right))


        res = []

        for i in range(len(nums)):
            res.append(left[i] * new_right[i])

        return res