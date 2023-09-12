#include<iostream>
using namespace std;
int main(){

    int priciple,time;
    float rate;
    cout<<"Enter priciple value : ";
    cin>>priciple;
    cout<<"Enter interest rate : ";
    cin>>rate;
    cout<<"Enter value of time : ";
    cin>>time;

    cout<<"Simple interest is : "<<priciple*rate*time/100;  // float*int*int/int = float;

}