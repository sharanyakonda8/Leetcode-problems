class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
      int f=2;
      vector<int>arr1;
      vector<int>arr2;
      arr1.push_back(nums[0]);
      arr2.push_back(nums[1]);
      while(f<nums.size()){
        if(arr1.back()>arr2.back()){
            arr1.push_back(nums[f]);
        }else{
            arr2.push_back(nums[f]);
        }
        f++;
      }
      for(int x:arr2){
        arr1.push_back(x);
      } 
      return arr1; 
    }
};