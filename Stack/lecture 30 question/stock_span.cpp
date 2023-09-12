#include<bits/stdc++.h>
using namespace std;

//using pair..
// vector<int> solve(int* arr,int size){
//     vector<int> ans;
//     stack<pair<int,int>> s;  //.first==val and .second==ind
//     for(int i=0;i<size;i++){
//         int x=arr[i];
//        while(!s.empty() and x>s.top().first){
//            s.pop();
//        }
//        int j;
//        if(s.empty()){
//           j=-1;
//           s.push({x,i});
//        }
//        else {
//           j=s.top().second;
//           s.push({x,i}); 
//        }
//        int span=i-j;
//        ans.push_back(span);

//     }
//     return ans;
// }


//without using pair
vector<int> solve(int* arr,int size){
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<size;i++){
        int x=arr[i];
       while(!s.empty() and x>arr[s.top()]){ //arr[ind]//ind of next greatest to left...
           s.pop();
       }
       int j;
       if(s.empty()){
          j=-1;
          s.push(i);
       }
       else {
          j=s.top();
          s.push(i); 
       }
       int span=i-j;
       ans.push_back(span);

    }
    return ans;
}
int main(){
    int arr[]={100,80,60,70,60,75,85};
      vector<int> ans;
      int size=sizeof(arr)/sizeof(int);
      ans=solve(arr,size);
      for(int x:ans){
        cout<<x<<" ";
      }
      cout<<endl;
}