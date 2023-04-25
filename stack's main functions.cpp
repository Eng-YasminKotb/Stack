#include <iostream>
#include <stack>
using namespace std;
stack<int>stc;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        stc.push(x);
    }
    cout<<"The size of the stack is: "<<stc.size()<<"\n";
    cout<<"Is stack empty? "<<stc.empty()<<"\n";

    for(int i=0;i<n;i++){
      cout<<stc.top()<<" ";
      stc.pop();
    }
    cout<<"\n";
    cout<<"Is stack empty? "<<stc.empty()<<"\n";
    return 0;
}
