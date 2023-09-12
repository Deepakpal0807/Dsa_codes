#include<bits/stdc++.h>
using namespace std;


//my approch.. 
// vector<int> solve(int* arr,int size){
        
    
//         stack<int> s;
//         vector<int> ans;
//         for(int i=size-1;i>=0;i--){
//             int x=arr[i];
//             if(s.empty()){
//                 ans.push_back(-1);
//                 s.push(x);
//             }
//             else if(x<s.top()){
//                 ans.push_back(s.top());
//                 s.push(arr[i]);
//             }
//             else{
//                 while(!s.empty() and x>=s.top()){
//                     s.pop();
//                 }
//                 if(s.empty()){
//                     ans.push_back(-1);
//                     s.push(x);
//                 }
//                 else{
//                     ans.push_back(s.top());
//                     s.push(x);
//                 }
//             }
//         }
//         reverse(ans.begin(),ans.end());
    
//      return ans;
        
// }

 //abhishek bhaiya code .. optimize in term of line of code...
vector<int> solve(int* arr,int size){
            stack<int> s;
        vector<int> ans;
        for(int i=0;i<size;i++){
            int x=arr[i];
           
                while(!s.empty() and x>=s.top()){
                    s.pop();
                }
                if(s.empty()){
                    ans.push_back(-1);
                    s.push(x);
                }
                else{
                    ans.push_back(s.top());
                    s.push(x);
                }
            
        }
        
    
     return ans;
}
int main(){
    // int arr[]={5,3,6,7,2,1,4};
    int arr[]={5,2,0,4,1,3,6};
    vector<int>ans;
    int size=sizeof(arr)/sizeof(int);
    ans= solve(arr,size);
    for(int x: ans){
        cout<<x<<" ";
    }
    cout<<endl;
}