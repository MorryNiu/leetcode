class Solution:
    def distributeCandies(self, candies):
        """
        :type candies: List[int]
        :rtype: int
        """
        return int(min(len(candies) / 2, len(set(candies))))
