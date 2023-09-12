#include<bits/stdc++.h>
using namespace std;
int lastoccurance(int *arr,int size,int i,int target){
    //base case....

    //1. 
    // if(i==-1){ //case of empty array..//element not found...
    //     return -1;
    // }
    //or

    if(i==0){
        return arr[i]==target?i:-1;
    }




    if(arr[i]==target){
        return i;
    }



    //recursive case....
    int x=lastoccurance(arr,size,i-1,target);
    return x;
}
int main(){
    int arr[]={10,20,30,20,10};
    int size=sizeof(arr)/sizeof(int);
    int target=70;
    int i=size;
    cout<<lastoccurance(arr,size,i,target)<<endl;
}