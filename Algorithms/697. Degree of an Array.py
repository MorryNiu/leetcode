class Solution:
    def findShortestSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        from collections import defaultdict as dd

        count = dd(int)

        for i in nums:
            count[i] += 1

        m, t = [i], 0

        for n in count.keys():
            if count[n] > count[m[t]]:
                m = [n]
                t = 0
            elif count[n] == count[m[t]] and (n not in m):
                m.append(n)
                t += 1

        length = 0
        fi, la = 0, 0
        rev = nums[::-1]

        for n in m:
            fi = nums.index(n)
            la = len(rev) - rev.index(n)
            if length == 0 or (la-fi) < length:
                length = la - fi

        return length
