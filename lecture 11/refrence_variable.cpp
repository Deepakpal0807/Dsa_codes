// it is used to create more than one name of the same variable 

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    int &y=a;
       y++;
       cout<<y<<endl;
}