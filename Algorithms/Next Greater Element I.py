class Solution:
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        st, dic = [], {}

        for n in nums2:
            while len(st) and (st[-1] < n):
                dic[st.pop()] = n
            st.append(n)

        return list(map(lambda x: dic.get(x, -1), nums1))

        # the key point of this program is using stack to determine the
        # next greater number in this list
