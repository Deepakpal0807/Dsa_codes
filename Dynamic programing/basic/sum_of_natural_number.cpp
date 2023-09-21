#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter last natural number : ";
    cin>>a;
    int i=1;
    int sum=0;
    while(i<=a){
        sum+=i;
        i++;

    }
    cout<<"sum of natural number is : "<<sum;
}