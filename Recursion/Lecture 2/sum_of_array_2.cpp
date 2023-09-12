#include<bits/stdc++.h>
using namespace std;
int arraysum(int *arr,int size,int i){
    //base case..
    // if(i==size){
    //     return 0;
    // }
    //2. base casea
    if(i==size-1){
        return arr[size-1];
    }



    //recursive case..
    int x=arraysum(arr,size,i+1);
    return arr[i]+x;
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(int);
    cout<<arraysum(arr,size,0)<<endl;
}