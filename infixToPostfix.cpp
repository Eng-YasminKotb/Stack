#include <bits/stdc++.h>
using namespace std;
int priority(char ch){
    if(ch=='+'||ch=='-') return 1;
    else if(ch=='*'||ch=='/') return 2;
    else if(ch=='^') return 3;
    else return 0;
}
string toPostfix(string exp){
    stack<char>st;
    string x="";
    for(int i=0;i<exp.size();i++){
       if(exp[i]=='(') st.push(exp[i]);
       else if(isdigit(exp[i])|| isalpha(exp[i])) x+=exp[i];
       else if(exp[i]==')') {
           while(st.top()!='('){
               x+=st.top();
               st.pop();
           }
           st.pop();
       }
       //is_operator
       else{
           while(!st.empty()&&priority(exp[i])<=priority(st.top())){
               x+=st.top();
               st.pop();
           }
           st.push(exp[i]);

       }
    }
    while (!st.empty()) x+=st.top(),st.pop();
    return x;
}
int main() {
      string s;
      cin>>s;
    cout<<toPostfix(s);
    return 0;
}
