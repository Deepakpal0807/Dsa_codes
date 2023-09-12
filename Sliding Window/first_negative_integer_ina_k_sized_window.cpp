#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,0,-1,2,-3,1,3};
    int size=sizeof(arr)/sizeof(int);
    int k=4;
    int i=0;//starting index of window..
    int j=0;//ending index of window..
    queue<int> q;
    vector<int> ans;
    while(j<k){
        if(arr[j]<0) q.push(arr[j]);
        j++;
    }
    //queue with starting window negative element are ready..
    q.empty()? ans.push_back(0): ans.push_back(q.front());
    while(j<size){
        //sliding the window.
        if(arr[i]<0) q.pop();
        i++;

        if(arr[j]<0) q.push(arr[j]);
        ans.push_back(q.front());
        j++;
    }
 
for(int x:ans){
    cout<<x<<" ";
}
    cout<<endl;
}