class Solution:
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        temp = s.split()

        for i in range(len(temp)):
            temp[i] = temp[i][::-1]

        return ' '.join(temp)
