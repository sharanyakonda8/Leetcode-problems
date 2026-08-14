class Solution(object):
    def findPermutationDifference(self, s, t):
        ans=0;
        for i in range(0,len(s)):
            for j in range(0,len(t)):
                if s[i]==t[j]:
                    ans=ans+abs(i-j)
        return ans


