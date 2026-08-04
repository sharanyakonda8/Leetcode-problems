class Solution(object):
    def findMissingElements(self, nums):
        mn = min(nums)
        mx = max(nums)

        st = set(nums)
        ans = []

        for i in range(mn + 1, mx):
            if i not in st:
                ans.append(i)

        return ans
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        