#include<bits/stdc++.h>
using namespace std;
bool arr[10]={false};
bool flag=false;       //you have no print any string yet..
void solve(string str,int i,string &out){
    //base case..
    if(out.size()==str.size()+1){
       cout<<out<<" ";
        
         flag=true;
         return ;
    }


    //corner case...
    if(out.size()==0){
        for(int i=1;i<=9;i++){
             arr[i]=true;
            out.push_back(i+'0');
            
            solve(str,i,out);
            out.pop_back();
            arr[i]=false;
          
        }
        return ;
    }

    //recursive case...
    int x=out.back()-'0'; //last element inserted...
    if(str[i]=='I'){
    for(int i=x+1;i<=9;i++){
        if(arr[i]==false){  //means element are not used before..
            
        out.push_back(i+'0');
        arr[i]=true; //use the element of that index...
        solve(str,i+1,out);
        arr[i]=false;
        out.pop_back();
        if(flag){
            return ; //you print the one smallest string then no recursive call are needed.
        }
        }
    }
    }
    else{   //str[i]=='D'
      for(int i=1;i<x;i++){
        if(arr[i]==false){
            
        out.push_back(i+'0');
        arr[i]=true;
        solve(str,i+1,out);
        arr[i]=false;
        out.pop_back();
        if(flag){ //smallest string are printed then no more recursive call are needed..
            return ;
        }
        }
      }
         
    }
      
    
}
int main(){
    string str;
    cin>>str;
   string out;
     
    solve(str,0,out);

}