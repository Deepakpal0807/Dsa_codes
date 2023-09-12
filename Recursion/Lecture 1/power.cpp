#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    // time : O(n)
   //base case..
    if(b==0){
        return 1;
    }
    //recursive case...
    return a*power(a,b-1);
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    cout<<power(a,b)<<endl;
}