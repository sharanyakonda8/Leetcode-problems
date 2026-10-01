class Solution {
public:
    bool isValid(string s) {
      stack<char>oper1;
        for(int i=0;i<s.size();i++){
         if(s[i]=='(' || s[i]=='{' || s[i]=='[')oper1.push(s[i]);
         else{
            if(oper1.empty())return false;
         
         char top=oper1.top();
         oper1.pop();
         if(s[i]==')' && top!='('||s[i]=='}' && top!='{' ||s[i]==']' && top!='[' )return false;
        }}
      
      return oper1.empty();  
    }
};