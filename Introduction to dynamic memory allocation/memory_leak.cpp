#include<bits/stdc++.h>
using namespace std;
int main(){
    int *ptr=new int ;
    *ptr=100;
    cout<<*ptr<<endl;
    delete ptr;    // to avoid memory leak in the heap
    ptr=new int;
    *ptr=200;
    cout<<*ptr<<endl;
}