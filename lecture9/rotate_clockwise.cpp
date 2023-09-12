#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/sizeof(int);
    int temp=arr[size-1];
    // for(int i=size-1, j=size-2; i>=1 && j>=0;i--,j--){
    //     arr[i]=arr[j]; 
    // }
    for(int i=size-1;i>=1;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}