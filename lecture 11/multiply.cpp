#include<iostream>
using namespace std;

int mul(int a,int b){
    return a*b;
}


int main(){

int a;
cin>>a;
int b;
cin>>b;
// int x=mul(a,b);
// cout<<x<<endl;

cout<<mul(a,b)<<endl;
return 0;
}