#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number of row : ";
    cin>>a;

    int i=0;
    while(i<=a){
        //printing space 
        int j=1;
        while(j<=a-i){
           cout<<"   ";
           j++;
        }

        //printing stars
        int k=1;
        while(k<=i){
            cout<<" * ";
            k++;
        }
        cout<<endl;
        i++;

    }
}