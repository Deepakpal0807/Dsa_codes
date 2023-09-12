#include<bits/stdc++.h>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int> l1;
    cout<<"size = "<<distance(l1.begin(),l1.end())<<endl;

    //insertion of node in the forward linklist..
    l1.push_front(50);
    l1.push_front(40);
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    cout<<"size = "<<distance(l1.begin(),l1.end())<<endl;

    cout<<l1.front()<<endl;

    for(int x:l1){//iterate using for each loop
      cout<<x<<" ";

    }
   cout<<endl;

   for(auto it=l1.begin(),end=l1.end();it!=end;it++){  //iterate using pointers...
          cout<<*it<<" ";
   }
   cout<<endl;

   l1.pop_front();

   for(int x:l1){//iterate using for each loop
      cout<<x<<" ";

    }
   cout<<endl;


    

}