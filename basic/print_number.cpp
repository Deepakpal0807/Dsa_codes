#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter last natural number : ";
    cin>>a;
    int i=2;
    while(i<=a){
        cout<<i<<'\t';
        i+=2;
    }

    return 0;
}