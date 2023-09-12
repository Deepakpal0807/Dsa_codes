#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Armaan{

    vector<T> v;
    public:
     
       void push(T val){
           v.push_back(val);
       }

       void pop(){
        if(v.size()==0){
            return ;
        }
        v.pop_back();
       }

       T top(){
        return v.back();
       }

       bool empty(){
        return v.empty();
       }

       int size(){
        return v.size();
       }
};
int main(){
    Armaan<int> s;

     cout<<"size = "<<s.size()<<endl;
     s.empty()?cout<<"Empty ! "<<endl:
               cout<<" Not Empty ! "<<endl;

     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
 
    cout<<"size = "<<s.size()<<endl;
     s.empty()?cout<<"Empty ! "<<endl:
               cout<<" Not Empty ! "<<endl;

    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;

       cout<<"size = "<<s.size()<<endl;
     s.empty()?cout<<"Empty ! "<<endl:
               cout<<" Not Empty ! "<<endl;

    s.pop();

       cout<<"size = "<<s.size()<<endl;
     s.empty()?cout<<"Empty ! "<<endl:
               cout<<" Not Empty ! "<<endl;


    s.pop();

       cout<<"size = "<<s.size()<<endl;
     s.empty()?cout<<"Empty ! "<<endl:
               cout<<" Not Empty ! "<<endl;

    s.pop();

       cout<<"size = "<<s.size()<<endl;
     s.empty()?cout<<"Empty ! "<<endl:
               cout<<" Not Empty ! "<<endl;

    

}