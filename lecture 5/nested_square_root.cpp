#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a non-negative integer : ";
    cin>>a;
    int p;
    cout<<"Enter digit after decimal : ";
    cin>>p;
    int i=1;
    double j=1;
    double k=1;

    while(i<=p+1){

        while(j*j<=a){
            j+=k;
        }
        j-=k;
        k=k/10;
        i++;
    }
    cout<<j<<endl;
}