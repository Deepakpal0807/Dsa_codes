#include<bits/stdc++.h>
using namespace std;
 vector <int> index;
 void alloccurance(int *arr,int size,int i,int target){
    //base case
    if(i==size){
        return ;
    }

    //recursive case..
    if(arr[i]==target){
        index.push_back(i);
    }
    alloccurance(arr,size,i+1,target);
 }
int main(){
    int arr[]={10,20,40,20,30};
    int size=sizeof(arr)/sizeof(int);
    int target=20;
     alloccurance(arr,size,0,target);
     if(index.empty()){ // vector.empty() means no  occurance are found then cout -1
        cout<<-1<<endl;
     }
     else{
        for(int x:index){
            cout<<x<<" ";
        }
        cout<<endl;
     }
}