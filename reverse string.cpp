#include<iostream>
#include <stack>
using namespace std;

stack<char>stc;
int main() {
//EX_1:use stack to reverse a given string
 string s;
 cin>>s;
 for(int i=0;i<s.size();i++){
     stc.push(s[i]);
 }
 for(int i=0;i<s.size();i++){
     cout<<stc.top();
     stc.pop();
 }


    return 0;
}


