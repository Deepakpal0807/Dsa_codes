#include<iostream>
using namespace std;
int main(){
    // if we declare multiple condition in for loops then  both loops variable should be same type...
    for(int i=0,j=5; i<5 && j>=1; i++, j--){
        cout<<i<<j<<" ";
    }
}