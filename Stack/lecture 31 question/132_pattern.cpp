#include<bits/stdc++.h>
using namespace std;
bool solve(int* arr,int size){
    //make a left min array and store the left side minimum value of all element..
    int leftmin[size]; //to store the ith element ...

    int minval=arr[1];
    for(int i=0;i<size;i++){
        leftmin[i]=min(minval,arr[i]);

        minval=min(minval,arr[i]);
        
    }
   stack<int> s;//to store the kth element..
  for(int i=size-1;i>=0;i--){
    while(!s.empty() and s.top()<=leftmin[i]){
           s.pop();
    } 
    if(!s.empty() and s.top()<arr[i]){//means next greater to the ith are found.. and smaller to the jth element..
       return true;
    }
    else{ //next greater element are not found.. push(arr[i]) in the stackk...
      s.push(arr[i]); 
    }

  }
  return false;

}
int main(){
    int arr[]={3,4,6,2,1,1};
    int size=sizeof(arr)/sizeof(int);
    solve(arr,size)? cout<<"Pattern found !":
                     cout<<"Pattern Not Found !";
    }