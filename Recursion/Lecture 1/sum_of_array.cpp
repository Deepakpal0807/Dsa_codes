#include<bits/stdc++.h>
using namespace std;
int arraysum(int arr[],int size){
    //base case..
    if(size==0){
        return 0;
    }

    //recursive case...
   int x= arraysum(arr,size-1);
    return x+arr[size-1];
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/sizeof(int);
  
    cout<<arraysum(arr,size)<<endl;
}