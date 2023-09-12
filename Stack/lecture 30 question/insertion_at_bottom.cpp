#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &s){ //by default the stack are passed by value.
        stack<int> s1;

    while(s.size()!=0){
        s1.push(s.top());
        s.pop();
    }
    s.push(0);
    while(s1.size()!=0){
        s.push(s1.top());
        s1.pop();
    }

}
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    //insertion at head;..
    solve(s);

    while(s.size()!=0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

}