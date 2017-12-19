class Solution:

    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        def ajSum(i, j):
            adjcent = (i+1,j), (i-1,j), (i,j+1), (i,j-1),
            count = 0

            for x,y in adjcent:
                if x < 0 or y < 0 or x == len(grid[0]) or y == len(grid[0]) or grid[x][y] == 0:
                    count += 1
            return count

        if not grid:
            return 0

        res = 0

        for i in grid:
            for j in i:
                if j:
                    res += ajSum(i,j)

        return res
