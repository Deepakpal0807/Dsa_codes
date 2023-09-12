#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    int i=1;
    int sum=0;
    while(i<=3){

     sum+=a+i*b;
     i++;

    }
    cout<<"sum of series : "<<sum;
}