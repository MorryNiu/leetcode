class Solution:
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        res = 0

        if len(prices) == 0:
            return res

        f1 = prices[0]

        for i in prices:
            if i < f1:
                f1 = i
            elif (i > f1) and (i-f1 > res):
                res = i-f1

        return res
