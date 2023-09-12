#include<bits/stdc++.h>
using namespace std;
int partition(int *arr,int s,int e){
    int j=s;
    int i=j-1;//or s-1 represent the right boundary of the left partition..
    int pivot=arr[e];
    while(j<e){
        if(arr[j]<pivot){
          i++;
          swap(arr[i],arr[j]);
        }
        j++;
    }

    swap(arr[i+1],arr[e]);
    return i+1;
}
void quicksort(int *arr,int s,int e){
    //base case...
    if(s==e){
        return ;
    }
    if(s>e){   //this case is mandetary else ur code will stuch in the edge case.. are shown in recursion tree in notes... 
        return;
    }


    //recursive case..
   
    int m=partition(arr,s,e);
    quicksort(arr,s,m-1);
    quicksort(arr,m+1,e);
}
int main(){
    int arr[]={60,50,10,30,20,40};
    int size=sizeof(arr)/sizeof(int);

    quicksort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}