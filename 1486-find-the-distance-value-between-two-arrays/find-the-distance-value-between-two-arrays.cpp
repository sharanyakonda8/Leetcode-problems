class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int f=0;
        int n=arr1.size();
        while(f<=(arr1.size()-1)){
            int s=0;
            while(s<=(arr2.size()-1)){
                if(abs(arr1[f]-arr2[s])<=d){
                    n--;
                    break;
                }
                s++;
            }
            f+=1; 
        }
        return n;
    }
};