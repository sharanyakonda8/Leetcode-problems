class Solution {
public:
    int maxProduct(int n) {
        int sum=0;
        vector<int>d;
        while(n>0){
            d.push_back(n%10);
            n=n/10;
        }
        sort(d.begin(),d.end());
        int a=d.size();
        return d[a-1]*d[a-2];
    }
};