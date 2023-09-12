#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;

        }
        cout<<endl;
    }
}