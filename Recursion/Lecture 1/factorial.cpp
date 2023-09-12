#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    //base case
    if(a==1){
        return a;
    }

    //recursive case
    return a*fact(a-1);
}
int main(){
  int a;
  cin>>a;
  cout<<fact(a)<<endl;;
}