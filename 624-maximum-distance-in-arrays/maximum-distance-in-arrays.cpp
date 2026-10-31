class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini=arrays[0][0];
        int maxi=arrays[0].back();
        int ans=0;
        for(int i=1;i<arrays.size();i++){
            int first=arrays[i][0];
            int last=arrays[i].back();
            ans=max(ans,max(abs(maxi-first),abs(mini-last)));
            mini=min(mini,first);
            maxi=max(maxi,last);
        }
        return ans;
    }
};