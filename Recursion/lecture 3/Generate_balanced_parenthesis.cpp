#include<bits/stdc++.h>
using namespace std;
// a and b are the no of '(' and ')' bracket used respectively..

//n is the number of opening or closing bracket..
//i is the no of decision makes..
// we take 2*n decision .. 
void solve(int n,int i,int a,int b,string str){
    //base case...
    if(i==2*n){
        cout<<str<<endl;
        return ;
    }

    //recursive casee...

    if(a<n ){
       solve(n,i+1,a+1,b,str+'(');

    }
    if(b<n and b<a){
        solve(n,i+1,a,b+1,str+')');
    }
}
int main(){
    int n;
    cin>>n;
    string str;
    solve(n,0,0,0,str);
}