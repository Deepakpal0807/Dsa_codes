#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    //algorithm for bubble sorting..
    for(int i=1;i<a;i++){// no of passes to sort the array...

    for(int j=0;j<a-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }

    }

    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
}