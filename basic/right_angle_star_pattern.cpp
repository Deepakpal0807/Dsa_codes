#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number of row : ";
    cin>>a;

    int i=1;
    while(i<=a){
        int j=1;
        while(j<=i){
            cout<<" * ";
            j++;
        }
        cout<<endl;
        i++;
    }

    //inverted right-triangle
     int x=1;
     while(x<=a){
    
    int j=1;
    while(j<=a+1-x){
        cout<<" * ";
        j++;
    }
    cout<<endl;
    x++;

     }
}