#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value a , b and c : ";
    cin>>a>>b>>c;
   int x= (a>b&&b>c)? a : b>c? b:c;
   cout<<x;
}