#include<bits/stdc++.h>
using namespace std;
int fibo(int a){
 if(a==0 ||a==1){
    return a;
 }

 return fibo(a-1)+fibo(a-2);

}
int main(){
    int a;
    cin>>a;
    cout<<fibo(a);
}