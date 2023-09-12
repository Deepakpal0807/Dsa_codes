#include<bits/stdc++.h>
using namespace std;
int solve(int* arr,int size){
    //nearest smaller to the right..
    vector<int> right;
    vector<int> left;
    stack<int> s;
    //find the nearest smaller to the right..
    for(int i=size-1;i>=0;i--){
        int x=arr[i];
        while(!s.empty() and x<=arr[s.top()]){
            s.pop();
        }
        if(s.empty()){
            right.push_back(size);
            s.push(i);
        }
        else{   //x>arr[s.top()]..
          right.push_back(s.top());
          s.push(i);

        }

    }
    reverse(right.begin(),right.end());
    // for(int x:right){

    //     cout<<x<<" ";
    // }
    // cout<<endl;

    while(!s.empty()){ //empty ur stack to store the left smaller..
        s.pop();

    }
    //find the nearest smaller to the left..
    for(int i=0;i<size;i++){
        int x=arr[i];
      while(!s.empty() and x<=arr[s.top()]){
            s.pop();
        }
        if(s.empty()){
            left.push_back(-1);
            s.push(i);
        }
        else{   //x>arr[s.top()]..
          left.push_back(s.top());
          s.push(i);

        }
    }

    //compute the height and base to find the maximum rectangle..
    int ans=0;
    for(int i=0;i<size;i++){
      
     int base=right[i]-left[i]-1;
     int height=arr[i];
     int area=base*height;
     if(ans<area){
        ans=area;
     }
    }

    for(int x:right){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:left){
        cout<<x<<" ";
    }
    cout<<endl;
   return ans;
}
int main(){
    int arr[]={2,5,5,6,2,3};
    int size=sizeof(arr)/sizeof(int);
     int ans=solve(arr,size);
     cout<<ans<<endl;
}