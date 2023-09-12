#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int num=0;
    while(n!=0){
        int bit=n&1;
        if(bit){
            num++;
        }
        n=n>>1;

    }
    // for(int k=0;k<=31;k++){
    //     if(n>>k1)
    // }
    cout<<"num of set bits : " <<num<<endl;
}
