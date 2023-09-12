#include<bits/stdc++.h>
using namespace std;
void print(int a){
    //base case 
    if(a==0){
        return ;
    }
    //recursive case;
    cout<<a<<" ";
    print(a-1);
}
int main(){
    int a;
    cin>>a;
    print(a);
}