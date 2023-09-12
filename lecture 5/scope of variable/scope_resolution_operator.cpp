#include<iostream>
using namespace std;
int x=100;

int main(){
    int x=10;
    cout<<x<<" "<<::x<<endl;
    ::x++;
    cout<<x<<" "<<::x<<endl;
    // using scope resolution operator :: we can acces the global value if declare ..
}