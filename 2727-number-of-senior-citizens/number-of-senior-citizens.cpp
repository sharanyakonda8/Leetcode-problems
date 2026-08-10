class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        vector<int>ans;
        for(int i=0;i<details.size();i++){
           ans.push_back((details[i][11]-'0')*10+(details[i][12]-'0'));
        }
        sort(ans.rbegin(),ans.rend());
        for(int i=0;i<ans.size();i++){
            if(ans[i]>60)c++;
            else{
                return c;
            }
        }
        return c;
    }
};