#include <iostream>
#include <stack>
using namespace std;
stack<int>stc1,stc2;
int main() {

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        stc1.push(x);
    }
    while(!stc1.empty()){
        int temp=stc1.top();
        stc1.pop();
        while(!stc2.empty()&&stc2.top()<temp){
            stc1.push(stc2.top());
            stc2.pop();
        }
        stc2.push(temp);
    }
    for(int i=0;i<n;i++){
        cout<<stc2.top()<<" ";
        stc2.pop();
    }

    return 0;
}
