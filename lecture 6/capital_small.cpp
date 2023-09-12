#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>='a' && c<='z'){
        cout<<"lower case"<<endl;
    }
    else if(c>='A' && c<='Z'){
        cout<<"Upperr case"<<endl;
    }
    else if(c>='0' && c<='9'){
        cout<<"number"<<endl;
    }
    else{
        cout<<" special symbol "<<endl;
    }
}