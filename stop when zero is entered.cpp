#include <iostream>
#include <stack>
using namespace std;
stack<int>stc;

int main() {
   //EX_2
   // push given numbers to the stack,until zero is entered
   // pop stored numbers from the stack, until empty.
   while(true){
       int x;
       cin>>x;
       if(x==0) break;
       else stc.push(x);
   }
   int n=stc.size();
   for(int i=0;i<n;i++){
       cout<<stc.top()<<" ";
       stc.pop();
   }

    return 0;
}
