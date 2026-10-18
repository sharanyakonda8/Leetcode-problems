class Solution {
public:
    bool isSubsequence(string s, string t) {
      int first=0,second=0,f=s.size(),se=t.size();
      while(first<f && second<se){
        if(s[first]==t[second]){
            first++;
        }
        second++;
      }
      return first==f;  
    }
};