#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,0,1,2,3,5};
    int size=sizeof(arr)/sizeof(int);
    int k=4;
    vector<int> ans;
    int i=0;//starting ind of sliding window.
    int j=0;//ending ind of sliding window.
    
    deque<int> q;
    while(j<k){
      while(!q.empty() and q.back()<arr[j]){
        q.pop_back();
      }
      q.push_back(arr[j]);
      j++;
    }
    ans.push_back(q.front());
    while(j<size){
        if(arr[i]==q.front()) q.pop_front();
        i++;
         while(!q.empty() and q.back()<arr[j]){
        q.pop_back();
      }
      q.push_back(arr[j]);
      j++;
      ans.push_back(q.front());
    }

    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;



    
}