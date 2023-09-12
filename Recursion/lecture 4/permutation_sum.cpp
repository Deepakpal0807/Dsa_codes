#include<bits/stdc++.h>
using namespace std;
void solve(int target,vector<int> v,vector<int> out){
    //base case..
    if(target==0){
        for(auto x: out){
            cout<<x<<" ";
        }
        cout<<endl;
        return ;
    }



    //recursive casae...
     int size=v.size();
     for(int i=0;i<size;i++){
        if(target-v[i]>=0){
            out.push_back(v[i]);
            solve(target-v[i],v,out);
            out.pop_back();
        }
     }
}
int main(){
  
    vector<int> v={2,3,5,7};
  
    int target=7;
   
    vector<int> out;
    solve(target,v,out);
    
}