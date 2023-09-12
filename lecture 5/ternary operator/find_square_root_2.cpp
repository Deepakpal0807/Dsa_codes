#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an positive integer : ";
    cin>>n;
  double i=0;
    while(i*i<=n){
        i++;
    }
   i=i-1;
   
   while(i*i<=n){
          i+=0.1;        
   }
   i-=0.1;
   while(i*i<=n){
    i+=0.01;

   }
   i-=0.01;
   cout<<"Square root of "<<n<<" is  : "<<i<<endl;


}