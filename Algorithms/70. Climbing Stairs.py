class Solution:
    def climbStairs(self, n):
        """
        0 - 1
        1 - 1
        2 - 2
        3 - 3
        4 - 5(1111 121 211 22 112)
        """
        if n == 0 and n == 1:
            return 1

        f1, f2 = 1, 1

        for i in range(1,n):
            f1, f2 = f1+f2, f1

        return f1
