#include<iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter number of rows : ";
  cin>>a;
  int i=0; //intialisation of variable
  while(i<=a){
     //printing space
     int j=1;
     while(j<=a-i){
        cout<<"   ";
        j++;

     }

     //printing star
     int k=1;
     while(k<=(2*i-1)){
        cout<<" * ";
        k++;
     }
     cout<<endl;
     i++;

  }

}