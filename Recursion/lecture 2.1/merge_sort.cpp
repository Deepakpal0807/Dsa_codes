// n<=100 ....(Constrain)

#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int start,int mid,int end){
     int i=start;
     int j=mid+1;
     int k=start;

     int crr[100];//size based on constraints..

     while(i<=mid and j<=end){
        if(arr[i]<=arr[j]){
            crr[k]=arr[i];
            i++;
            k++;
        }
        else{
            crr[k]=arr[j];
            j++;
           k++;
        }

     }

     while(i<=mid){
        crr[k]=arr[i];
        k++; i++;
     }
     while(j<=end){
        crr[k]=arr[j];
        k++;
        j++;
     }
     for(int i=start;i<=end;i++){
        arr[i]=crr[i];
     }
}
void mergesort(int *arr,int s,int e){
    //base case
    if(s==e){
        return ;
    }


    //divide the array in two equal half
    int mid=s+(e-s)/2;
    
    // recurive sort the two subarray arr[s--- mid] and arr[mid+1 ----- e]..

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    //merge two sorted subarray 
    merge(arr,s,mid,e);
    
}
int main(){
    int arr[]={50,40,20,30,10};
    int size=sizeof(arr)/sizeof(int);
    mergesort(arr,0,size-1);//array are pass by refrence in cpp
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}