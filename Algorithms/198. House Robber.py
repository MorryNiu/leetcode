class Solution:
    def rob(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        f1 = f2 = 0

        for i in nums:
            f1, f2 = max(f2+i, f1), f1

        return f1

#不同于台阶，这里操作的数字永远是上上个
