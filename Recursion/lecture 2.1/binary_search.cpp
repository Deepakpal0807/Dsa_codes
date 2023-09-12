#include<bits/stdc++.h>
using namespace std;
int binary_search(int *arr,int target,int s,int e){
    //base case
    if(s>e){
        return -1;
    }

    //recursive case..
    int mid=s+(e-s)/2;
   
     if(arr[mid]==target){
        return mid;
     }
     else if(arr[mid]<target){
        s=mid+1;
        // search target in arr[mid+1 ----- to  e];
       return binary_search(arr,target,s,e);
     }
     else{
        e=mid-1;
        //search target in arr[s --------- mid-1];
       return binary_search(arr,target,s,e);
     }

}
int main(){
    int arr[]={1,2,3,4,5};//sorted array...
    int size=sizeof(arr)/sizeof(int);
    int target=3;
    int s=0;
    int e=size-1;
    cout<<binary_search(arr,target,s,e)<<endl;
}