#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of integer : ";
    cin>>n;
    int max=INT_MIN;
    int i=1;
    int a;
cout<<"Enter integers value : ";
    while(i<=n){
        cin>>a;
        if(a>max){
            max=a;
        }
        i++;
    }
    cout<<max<<endl;


}