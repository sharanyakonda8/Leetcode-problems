class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp,i;
      for(i=n;;i++){
        int dproduct=1;
        temp=i;
        while(temp>0){
            dproduct=dproduct*(temp%10);
            temp/=10;
        }
        if(dproduct%t==0)return i;
      } 
      return 0; 
    }
};