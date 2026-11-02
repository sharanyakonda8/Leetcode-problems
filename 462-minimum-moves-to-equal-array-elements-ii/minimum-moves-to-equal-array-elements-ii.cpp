class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
       int mdle=nums[n/2];
       int ans2=0;
       for(int i=0;i<n;i++){
        ans2=ans2+abs(nums[i]-mdle);
       }
       return ans2;
    }
};