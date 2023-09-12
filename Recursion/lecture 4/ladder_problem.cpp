#include<bits/stdc++.h>
using namespace std;


void solve(int n,int k,vector<int> c){
    //base case...
    if(n==0){

        for(int x: c){
            cout<<x<<" ";
        }
        cout<<endl;
        // count++;
        return ;
    }



    //recursive case..
    for(int i=1;i<=k;i++){
        if(n-i>=0){

           c.push_back(i);

          
           solve(n-i,k,c);
           c.pop_back();
          
        }

    }
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> c;
   
    solve(n,k,c);
    
    }