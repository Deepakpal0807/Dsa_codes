#include<bits/stdc++.h>
using namespace std;
vector<string> v={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
// void solve(string str,int i,string out){
//     //base case...
//     if( str[i]=='\0'){
//         cout<<out<<endl;
//         return ;
//     }

    

//     //recursive case..
//     int index=str[i]-'0';
//     //corner case..
//     if(index==0 || index==1){
//         solve(str,i+1,out);
//         return ;
//     }
//     string opt=v[index];
//     // cout<<opt<<endl;
//     //1.using simple for loop
//     // int size=opt.size();
//     // for(int k=0;k<size;k++){
//     //      solve(str,i+1,out+opt[k]);
//     // }

//     //2. using for each loop..
//     for(auto x: opt){
//         solve(str,i+1,out+x);
//     }
// }


//2.including external backtraking..
void solve(string str,int i,string &out){
    //base case...
    if( str[i]=='\0'){
        cout<<out<<endl;
        return ;
    }

    

    //recursive case..
    int index=str[i]-'0';
    //corner case..
    if(index==0 || index==1){
        solve(str,i+1,out);
        return ;
    }
    string opt=v[index];

    //2. using for each loop..
    for(auto x: opt){
        out.push_back(x);
        solve(str,i+1,out);
        out.pop_back();
    }

}
int main(){
string str;
cin>>str;
string out;
solve(str,0,out);
}