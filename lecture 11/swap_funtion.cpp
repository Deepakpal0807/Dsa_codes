#include<bits/stdc++.h>
using namespace std;
void swaping(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"before swap"<<endl<<"a = "<<a<<" b = "<<b<<endl;
    swaping(a,b);
    cout<<"After swap "<<endl<<"a = "<<a <<"  "<<" b = "<<b<<endl;
}
