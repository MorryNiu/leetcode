class Solution:
    def minCostClimbingStairs(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        f1 , f2 = 0, 0

        for i in cost:
            f1, f2 = i + min(f1, f2), f1
            #print('f1=',f1,',f2=',f2)

        return min(f1,f2)
