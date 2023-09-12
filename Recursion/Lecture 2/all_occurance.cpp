#include<bits/stdc++.h>
using namespace std;
bool flag=true;
void firstoccurance(int *arr,int size,int i,int target){
    //base case..
    //1.
    if(i==size){
        if(flag){
            cout<<-1<<endl;
        }
      return ;
    }
    //or 
    // if(i==size-1){ // if over iterating we ovvur at last elemetn if the last element also not equal to target then the target are not found return -1..
    //      return arr[i]==target?i:-1;
    // }


    if(arr[i]==target){
        cout<<i<<" ";
        flag=false;
    }    

    


    //recursive case..
    firstoccurance(arr,size,i+1,target);

    

}
int main(){
    int arr[]={10,20,40,20,30};
    int size=sizeof(arr)/sizeof(int);
    int target=100;
     firstoccurance(arr,size,0,target);
}