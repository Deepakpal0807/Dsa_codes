#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an  positive integer value : ";
    cin>>n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    cout<<"Sum of digits : "<<sum;
}