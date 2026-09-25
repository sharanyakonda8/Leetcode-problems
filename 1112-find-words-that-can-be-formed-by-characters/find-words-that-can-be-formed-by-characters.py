class Solution(object):
    def countCharacters(self, words, chars):
        count=Counter(chars)
        sum=0
        for i in words:
            word_count=Counter(i)
            isin=1
            for j in i:
                if count[j]<word_count[j]:
                    isin=0
                    break
            if isin==1:
                sum+=len(i)
        return sum
        
            
