#include<bits/stdc++.h>
using namespace std;
void print(int n){
    //bas case..
    if(n==0){
      return ;
    }

    //recursive case..
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(n);
}