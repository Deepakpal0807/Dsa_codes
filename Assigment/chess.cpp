#include<bits/stdc++.h>
using namespace std;
void solve(int n,int i,int j,vector<pair<int,int>> v){
    //base case...
    if(i==n-1 and j==n-1){
        // for(pair<int,int> x:v){
        //   cout<<x.first<<" "<<x.second<<endl;
        // }
        // cout<<endl;
        cout<<"Armaan"<<endl;
        return ;
    }
    if(i==-1 || j==-1 || i==n || j==n){
        //outside the boudary..
        return ;
    }


    //recursive case..
    if(i==0 || i==n-1|| j==0 || j==n-1){
        for(int x=0;x<=n;x++){
             if(x+i>=n || j+x>=n){
                return ;
             }
                // /v.push_back({i,j+x});
                solve(n,i,j+x,v);
                // v.pop_back();
            
            
                // v.push_back({i+x,j});
                solve(n,i+x,j,v);
                // v.pop_back();
           
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    solve(n,0,0,v);
}