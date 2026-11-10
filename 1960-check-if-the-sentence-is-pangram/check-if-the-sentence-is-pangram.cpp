class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>al(26);
        for(int i=0;i<sentence.size();i++){
            al[sentence[i]-'a']++;
        }
        for(auto x:al){
            if(x==0)return false;
        }
        return true;
    }
};