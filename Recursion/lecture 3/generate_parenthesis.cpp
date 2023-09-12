#include<bits/stdc++.h>
using namespace std;



//my approchhh..
void solve(int n,int i,string str){
    // base case...
    if(i==2*n){ //size of the output string..
        cout<<str<<endl;
        return ;
    }

    //recursive case...
    int count=0;
    int count1=0;
    int size=str.size();
    for(int i=0;i<size;i++){
        if(str[i]=='('){
            count++;
        }
        else  count1++;
        
    }
    if(count<2){

    solve(n,i+1,str+'(');
    }
    if(count1<2){

    solve(n,i+1,str+')');
    }
}
int main(){
    int n;
    cin>>n;
    string str;
    solve(n,0,str);
}