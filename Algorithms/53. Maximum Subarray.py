class Solution:
    def maxSubArray(self, nums):
        if not nums:
            return 0
        fmax = fn = nums[0]

        for i in nums[1:]:
            fn = max(i, fn+i)
            fmax = max(fmax, fn)

        return fmax
