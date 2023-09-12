#include<bits/stdc++.h>
using namespace std;
int* resize(int *arr,int c){
    cout<<"resizing from "<<
           c*sizeof(int)<<" B to "<<
           2*c*sizeof(int)<<" B"<<endl;
        int *arr1=new int[2*c];
        for(int i=0;i<c;i++){
            arr1[i]=arr[i];
        }
        delete []arr;
        return arr1;
 }
int main(){
    //creating array on heap of size 1


    int *arr=new int[1];
    int c=1;   //capacity of an array 

    int i=0;    // size of an array  // no of element store in an array

        int n;
     while(true){
        cout<<" >> ";
        cin>>n;
        if(n<0){
            break;

        }
        if(c==i){
            //resize the dynamics arry..
            arr=resize(arr,c);
            c*=2;
        }
        arr[i]=n;
        i++;
     }
     

     //prinnting the dynamic incresing array after all value are assign
     for(int x=0;x<i;x++){
        cout<<arr[x]<<" ";
     }
     cout<<endl;
}