#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={20,5,0,25,15,10};
    int a,b,c;
    a=INT_MIN;
    b=INT_MIN;
    c=INT_MIN;
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
         if(arr[i]>a){
            c=b;
            b=a;
            a=arr[i];
         }
         else if(arr[i]>b){
            c=b;
            b=arr[i];
         }
         else if(arr[i]>c){
            c=arr[i];
         }
    }
    cout<<a<<"  "<<b<<"  "<<c<<"  "<<endl;
    //product maximum
    // cout<<a*b*c<<endl;
}