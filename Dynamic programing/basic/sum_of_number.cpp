#include<iostream>
using namespace std;

int main(){
    int a,n;
    cout<<"Enter number of number : ";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){

    cout<<"Enter " <<i<<" value : ";
    cin>>a;
    sum+=a;
    i++;

    }
    cout<<"Sum of interger are : "<<sum;
}