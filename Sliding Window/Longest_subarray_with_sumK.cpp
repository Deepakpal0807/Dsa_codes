#include<bits/stdc++.h>
using namespace std;
int ans(int *arr,int size,int k){
     int i=0;
    int j=0;
    int maxlength=0;
    int sum=0;
    while(j<size){
        sum+=arr[j];
        j++;
        if(sum>k){ //property voilated..
            while(sum>k){
                sum-=arr[i];
                i++;
            }
        }
      
        maxlength=max(maxlength,j-i);    
    }
    return maxlength;
}
int main(){
    int arr[]={2,3,2,4,0,2,0};
    int k=6;
    // int arr[]={1,2,1,2,1};
    // int k=3;
    int size=sizeof(arr)/sizeof(int);
     int x=ans(arr,size,k);
     cout<<x<<endl;
 
}