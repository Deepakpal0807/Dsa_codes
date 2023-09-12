#include<iostream>
using namespace std;
int main(){
    int n=5;
    int k=1;
    for(int i=1;i<=n;i++){
        int k=i;
       //printing spaces
       for(int j=1;j<=n-i;j++){
        cout<<"   ";
       }
       //printing first
       for(int j=1;j<=i;j++){
        cout<<" "<<k<<" ";
        k++;
       }
    //    k--;


    //    for(int j=1;j<i;j++){
    //     k--;
    //     cout<<" "<<k<<" ";
    //    }


// sir method 
    // k=2*i-2;
    // for(int j=1;j<i;j++){
    //     cout<<" "<<k<<" ";
    //     k--;
    // }
        cout<<endl;
    }
}