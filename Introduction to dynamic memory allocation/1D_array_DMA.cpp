#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;

       //declaration of array on heap
       int *arr=new int[n];

       //assign value on array
       for(int i=0;i<n;i++){
        cin>>arr[i];   //or cin>>*(arr+i);
       }

       //output the value of array on heap
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";   // or  cout<<*(arr+i)<<" ";
       }


       //deallocation of array on heap
       delete []arr;
}