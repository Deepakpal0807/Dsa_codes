#include<bits/stdc++.h>
using namespace std;
stack<int> solve_recursive(stack<int> s){
    //base case
    if(s.size()==0){
        s.push(0);
        return s ;
    }
    


    //recursive case..
    int val=s.top();
    s.pop();
    s=solve_recursive(s);
    s.push(val);
    return s;

}
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

  s=  solve_recursive(s);

     while(s.size()!=0){
        cout<<s.top()<<" ";
        s.pop();
     }
     cout<<endl;
}