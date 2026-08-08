class Solution(object):
    def maxCount(self, banned, n, maxSum):
        banned=set(banned)
        s=0
        c=0
        for i in range(1,n+1):
            if i not in banned and s+i<=maxSum:
                c+=1
                s=s+i
            elif s+i>maxSum:
                break
        return c
                

        