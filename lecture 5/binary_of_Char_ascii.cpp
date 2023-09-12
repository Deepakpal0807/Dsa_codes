#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char c;
    cin>>c;
    
    int a=c;
    int i=0;
    int ans=0;
    while(a!=0){
        int bit=a&1;
         ans=bit*pow(10,i)+ans;
        a=a>>1;
        i++;
    }
    cout<<ans<<endl;
    


}