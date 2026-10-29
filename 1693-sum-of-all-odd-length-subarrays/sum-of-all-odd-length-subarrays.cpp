class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int x:arr){
            sum+=x;
        }
        int k=3;
        while(k<=n){
           for(int i=0;i<n;i++){
            int s=0;
            int c=0;
               for(int j=i;j<i+k && j<n;j++){
                   s+=arr[j];
                   c++;
               }
               if(c==k){
                sum=sum+s;}
           }
           k=k+2; 
        }
        return sum;

    }
};