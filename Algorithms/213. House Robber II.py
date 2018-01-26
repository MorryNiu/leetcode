class Solution:
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0

        if len(nums) == 1:
            return nums[0]

        f1, f2 = 0, 0

        for i in nums[1:]:
            f1, f2 = max(f1, f2+i), f1

        pre = f1

        f1, f2 = 0, 0

        for i in nums[:-1]:
            f1, f2 = max(f1, f2+i), f1

        return max(f1, pre)
