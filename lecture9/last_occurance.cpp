#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,10,20};
    int target;
    cin>>target;
    int size=sizeof(arr)/sizeof(int);
    for(int i=size-1;i>=0;i--){
        //start iteration from right to left
        if(arr[i]==target){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}