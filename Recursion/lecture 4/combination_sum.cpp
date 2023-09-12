#include<bits/stdc++.h>
using namespace std;
void solve(int target,int ind,vector<int> v,vector<int> out){
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
     for(int i=ind+1;i<size;i++){
        if(target-v[i]>=0){
            out.push_back(v[i]);
            solve(target-v[i],i,v,out);
            out.pop_back();
        }
     }
}
int main(){
  
    // vector<int> v={1,2,3,5};
    vector<int> v{1};
  
    int target=2;
   
    vector<int> out;
    
    solve(target,-1,v,out);
    
}