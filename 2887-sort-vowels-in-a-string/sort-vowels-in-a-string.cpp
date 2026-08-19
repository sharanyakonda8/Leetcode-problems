class Solution {
public:
    string sortVowels(string s) {
        vector<int>index;
        vector<char>vowels;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowels.push_back(s[i]);
                index.push_back(i);
            }
        }
        sort(vowels.begin(),vowels.end());
        for(int i=0;i<index.size();i++){
            s[index[i]]=vowels[i];
        }
        return s;
    }
};