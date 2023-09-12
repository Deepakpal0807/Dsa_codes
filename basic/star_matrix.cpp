#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of row : ";
    cin>>r;
    cout<<"Enter number of coloum  : ";
    cin>>c;

    int i=1;
    while(i<=r){
           
           int j=1;
           while(j<=c){
            cout<<" * ";
            j++;
           }
           cout<<endl;
           i++;
    }
}