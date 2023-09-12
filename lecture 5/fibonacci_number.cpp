#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a positive interger value : ";
    cin>>n;
    if(n==0|| n==1){
        cout<<n<<endl;
    }
    else{
        int a=0;
        int b=1;
        int c=0;
        int i=2;
        while(i<=n){
            c=a+b;
            a=b;b=c;
            i++;
        }
        cout<<c;
    }
}