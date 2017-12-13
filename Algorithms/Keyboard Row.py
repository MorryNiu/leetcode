#PRIMARY
class Solution:
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        return list(filter(re.compile('([QWERTYUIOPqwertyuiop]*|[ASDFGHJKLasdfghjkl]*|[ZXCVBNMzxcvbnm]*)$').match, words))



#IMPROVED
class Solution:
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        return list(filter(re.compile('(?i)([qwertyuiop]*|[asdfghjkl]*|[zxcvbnm]*)$').match, words))
