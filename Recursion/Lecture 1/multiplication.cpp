#include<bits/stdc++.h>
using namespace std;
int multiply(int a,int b){
    //base case..
    if(b==1){
        return a;
    }
      //recursive case..
      return a+multiply(a,b-1);
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<multiply(a,b)<<endl;
}