#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter last natural number : ";
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<'\t';
        i++;
    }
    return 0;
}