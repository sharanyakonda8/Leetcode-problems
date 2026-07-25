class Solution(object):
    def distributeCandies(self, candyType):
        n=len(candyType)/2
        l=set(candyType)
        m=len(l)
        if m>n:
            return n
        return m

        
        