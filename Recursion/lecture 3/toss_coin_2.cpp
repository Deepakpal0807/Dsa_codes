#include<bits/stdc++.h>
using namespace std;

//using char array..
// void solve(int n,int i,char* c){
//     //base case...
//     if(i==n){
//         c[i]='\0';
//         cout<<c<<endl;
//         return ;
//     }


//     //recursive case...
//     if( i==0 || c[i-1]!='H'){
//     c[i]='H';
//     solve(n,i+1,c);

//    }
//    c[i]='T';
//    solve(n,i+1,c);
// }


//using string...

void solve(int n,int i,string str){
    //base case..
    if(i==n){
        cout<<str<<endl;
        return ;
    }


    //recursive case..
    if(i==0|| str[i-1]!='H'){
        solve(n,i+1,str+'H');
    }
    solve(n,i+1,str+'T');
}
int main(){
    int n;
    cin>>n;


    //1.using char array..
    // char c[n];
    // solve(n,0,c);

    //2.using string..
    string out;
    solve(n,0,out);
}