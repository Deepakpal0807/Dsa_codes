// #include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s; //stack are dynamics in nature..

    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);
    s.push(10);

   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;
   
   cout<< s.top()<<endl;
   s.pop();
   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;
    
    cout<<s.top()<<endl;
   s.pop();
   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;

   cout<<s.top()<<endl;
   s.pop();
   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;

   cout<<s.top()<<endl;
   s.pop();
   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;
   
   cout<<s.top()<<endl;
   s.pop();
   cout<<s.size()<<endl;
   cout<<s.empty()<<endl;

   

}