class Solution:
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        res = []

        for i in range(-1,3):
            res.append(nums[i] * nums[i-1] * nums[i-2])
        return max(res)
