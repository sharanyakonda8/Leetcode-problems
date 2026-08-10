class Solution {
public:
    int maxDifference(string s) {
       unordered_map<char,int>freq;
       for(int i=0;i<s.size();i++){
        freq[s[i]]++;
       }
       int maxi=INT_MIN;
       for(auto &p1:freq){
        for(auto &p2:freq){
            if(p1.second%2!=0 && p2.second%2==0){
                maxi=max(p1.second-p2.second,maxi);
            }
        }
       }
       return maxi;

    }
};