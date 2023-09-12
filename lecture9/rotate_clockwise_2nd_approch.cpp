#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=sizeof(arr)/sizeof(int);
    swap(arr[0],arr[size-1]);
    for(int i=size-1;i>1;i--){
        swap(arr[i],arr[i-1]);
    }
    // loops n-2 time chlega and total steps n-1 time chlega
    // because hmne phele value assign bhi kr li h

    //printing array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

 
   


}