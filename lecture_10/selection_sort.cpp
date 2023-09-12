#include<iostream>
using namespace std;
int mani(){
    int arr[]={50,40,10,20,30};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size-1;i++){
        
        int mid_ind=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[mid_ind]){
                mid_ind=j;
            }
        }
        swap(arr[mid_ind],arr[i]);


    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}