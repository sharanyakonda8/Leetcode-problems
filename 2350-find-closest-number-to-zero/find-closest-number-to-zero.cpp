class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       int closest=nums[0];
       int ans;
       for(int num:nums){
         if(abs(closest)>abs(num)||
                (abs(num) == abs(closest) && num > closest)){
            closest=num;
         }
       } 
     return closest;  
    }
};