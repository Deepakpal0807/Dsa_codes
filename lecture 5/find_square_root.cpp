#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter an positive interger : ";
   cin>>n;
   int i=0;
   while(i*i <= n){
    i++;
   }
   cout<<i-1;

    
}