#include<bits/stdc++.h>
using namespace std;
int solve(int* arr,int size){
    int ans=0;
    stack<int> s; //ind.. store..
    for(int i=size-1;i>=0;i--){
        int x=arr[i];
        while(!s.empty() and x< arr[s.top()]){
            s.pop();
        }
        int j;
        if(s.empty()){
           j=size; 
           s.push(i);
        }
        else{   //x> arr[s.top()]
        j=s.top();
        s.push(i);
        }
        int diff=j-i;
      
       ans+=diff;
    }
        
        return ans;
}
int main(){
    int arr[]={1,4,2,5,3,9};
    int size=sizeof(arr)/sizeof(int);
    int ans;
    ans=solve(arr,size);

    cout<<ans<<endl;
}