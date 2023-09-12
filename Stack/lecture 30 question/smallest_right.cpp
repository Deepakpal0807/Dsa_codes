#include<bits/stdc++.h>
using namespace std;
// Note : for an element without a smaller element to its left, output size
vector<int> solve(int* arr,int size){
    vector<int> ans;
    stack<int> s;
    for(int i=size-1;i>=0;i--){
        int x=arr[i];
        while(!s.empty() and x<=arr[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(size);
            s.push(i);
        }
        else{
            ans.push_back(s.top());
            s.push(i);
        }
    }
    reverse(ans.begin(),ans.end());
    for(int x: ans){
        cout<<x<<" ";
            }
            cout<<endl;
    return ans;
}

int main(){
    int arr[]={2,5,1,3,6,4,0};
    int size=sizeof(arr)/sizeof(int);
    vector<int> ans;
    ans=solve(arr,size);
    
    for(int x :ans){
        cout<<x<<" ";
    }
    cout<<endl;
}