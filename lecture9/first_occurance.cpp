#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,10,20};
    int size=sizeof(arr)/sizeof(int);
    int target;
    cin>>target;
    for(int i=0;i<size;i++){
  if(arr[i]==target){
    cout<<i<<endl;
   return 0;
  }
    }
    cout<<-1<<endl;
   
}