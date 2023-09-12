#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;

    if(a>b && a>c){
        cout<<a<<" is largest ";
    }
    else{
        if(b>c){
            cout<<b<<" is largest ";
        }
        else{
            cout<<c<<" is largest ";
        }
    }
}