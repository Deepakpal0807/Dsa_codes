#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    //time : O(log n)
    //base case..
    if(b==0){
        return 1;
    }

    //recursive case..
    int A=power(a,b/2);
    if(b%2==0){
        return A*A;

    }
    return A*A*a;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
   cout<< power(a,b)<<endl;
}