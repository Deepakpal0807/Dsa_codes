#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    (a<b && a<c) ? cout<<"A is lesser "<<endl: b<c? cout<<" b is lesser ": cout<<" c is lesser ";
}