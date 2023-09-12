#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,10,20};
    int size=sizeof(arr)/sizeof(int);
    int target;
    cin>>target;
    // int count=0;
    //using flag instead of using variable.
    bool flag=false;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<i<<" ";
            // count++;
            flag=true;
            
        }
    }
    // if(count==0){
    //     cout<<-1;
    // }
    // if(flag==true){
    //     cout<<-1<<endl;
    // }
    if(!flag){
        cout<<-1<<endl;
    }
    return 0;
    
}