#include<bits/stdc++.h>
using namespace std;
int main(){
    //fill constructor..
    vector<int> v(5); //vector of int of 5 size are created that contain default value zero.

    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    //intialise the default value;;
    vector<int>v2(10,12);//size is 10 and all value are 12
    for(auto x:v2){
        cout<<x<<" ";
    }
    cout<<endl;
    //size of vector can be increased by usign pushback...

    //copy constructor...
    vector<int> v3=v;
    for(int x:v3){
        cout<<x<<" ";
    }
    cout<<endl;

    //copy assigment operator..
    vector<int>v4;
    v4=v2;
    for(int x:v4){
        cout<<x<<" ";
    }
    cout<<endl;


    //range constructor...
    vector<int>v5{1,2,3,4,5};
    vector<int>v6(v5.begin()+1,v5.end()-1);
    for(auto x:v6){
        cout<<x<<" ";
    }
    cout<<endl;
}