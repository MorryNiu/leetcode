class Solution:
    def nextGreaterElements(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        st, res = [], [-1] * len(nums)

        # finish it later by using stack
