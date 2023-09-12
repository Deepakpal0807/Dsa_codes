#include<bits/stdc++.h>
using namespace std;
int solve(int n,int k,int i,vector<int> v){
    //base case...
    if(i==n){
        //you are on nth step
        for(int x: v){
            cout<<x<<" ";
        }
        cout<<endl;
        return 1;
    }

    if(i>n){
        return 0;
        //beyound the nth step 
        //if condition from recursive case are removed and a addtional base case are added that work the same but the no of function call are increase because we check the condition after call..
    }

    //recursive case..
    int count=0;
    for(int j=1;j<=k;j++){
        //compute the no of ways to go from ith step to k th step..
      
          v.push_back(j);
        count+=solve(n,k,i+j,v);
        v.pop_back();
    }
     
    return count;
}
// int solve(int n,int k,int i,vector<int> v){
//     //base case...
//     if(i==n){
//         //you are on nth step
//         for(int x: v){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//         return 1;
//     }

//     //recursive case..
//     int count=0;
//     for(int j=1;j<=k;j++){
//         //compute the no of ways to go from ith step to k th step..
//         if(i+j<=n){ //boundary condition.
//           v.push_back(j);
//         count+=solve(n,k,i+j,v);
//         v.pop_back();
//            }
//            else
//            break;
//     }
//     return count;
// }
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> v;
    cout<<solve(n,k,0,v);
}