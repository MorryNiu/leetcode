class Solution:
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0

        lmax = lmin = gmax = nums[0]

        for i in nums[1:]:
            lmax, lmin = max(lmin*i, lmax*i, i), min(lmax*i, lmin*i, i)
            gmax = max(lmax, lmin, gmax)

        return gmax
