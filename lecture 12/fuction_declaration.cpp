#include<bits/stdc++.h>
using namespace std;
int multi( int a){ // function declaration..
    return a*a;
}
int multi(int a,int b){
    return a+b;
}
int main(){
    int a;
    cin>>a;
    int b=2;
    cout<<multi(a)<<endl;// function call.
    cout<<multi(a,b)<<endl;
}