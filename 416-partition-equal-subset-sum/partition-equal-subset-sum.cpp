class Solution {
public:
    bool canPartition(vector<int>& nums) {
      int t=0;
      for(int x:nums){
        t+=x;
      }  
      if(t%2!=0){
        return false;
      }
      int target=t/2;
       vector<bool> dp(target + 1, false);
       dp[0]=true;
      for(int num:nums){
        for(int s=target;s>=num;s--){
           dp[s]=dp[s] || dp[s-num];
        }
      }
      return dp[target];
    }
};