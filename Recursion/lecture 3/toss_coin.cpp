#include<bits/stdc++.h>
using namespace std;
void print(int size,int i,string str){
    //base case..
    if(i==size){
        cout<<str<<endl;
        return ;
    }

    //recursive case..
    
    print(size,i+1,str+'H');
    print(size,i+1,str+'T');
}
int main(){
    int n;
    cin>>n;
    string out;
    print(n,0,out);
}