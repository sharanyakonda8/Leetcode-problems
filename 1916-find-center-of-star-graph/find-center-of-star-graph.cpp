class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int>freq(n+2,0);
        for(auto t:edges){
            freq[t[0]]++;
            freq[t[1]]++;
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]==n)return i;
        }
        return -1;
    }
};