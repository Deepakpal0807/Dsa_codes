#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(int);
    // for(int i=0;i<size/2;i++){
    //     // int temp;
    //     // temp=arr[i];
    //     // arr[i]=arr[size-1-i];
    //     // arr[size-1-i]=temp;

    //     //cpp has built-in function to swap two values...
    //     swap(arr[i],arr[size-1-i]);
    // }

    //using while loops
    int i=0;
    int j=size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    // array is reversed successfully.
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
