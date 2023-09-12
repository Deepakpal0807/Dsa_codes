#include<bits/stdc++.h>
using namespace std;
void table(int a,int b){
    //base case..
    if(b==0){
        return ;
    }
    //recursive case;
    table(a,b-1);
    cout<<a*b<<" ";
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    table(a,b);
}