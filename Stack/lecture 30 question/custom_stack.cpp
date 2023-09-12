// #include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

//space : O(n) due to minimum stack...
//time: O(1) constant time..
class custom_stack{
    stack<int> main_stack;
    stack<int> min_stack;
    public:
    void push(int val){
       main_stack.push(val);
       if(min_stack.empty()){
        min_stack.push(val);
       }
       else if(val<= min_stack.top()){
        min_stack.push(val);
       }
    }
    void pop(){
      if(main_stack.top()==min_stack.top()){
        min_stack.pop();
        main_stack.pop();
      }
      else
      main_stack.pop();
    }
    bool empty(){
        return main_stack.empty();

    }
    int size(){
        return main_stack.size();

    }
    int top(){
        return main_stack.top();

    }
    int getmin(){
        return min_stack.top();
    }
};
void print(custom_stack c){
    while(!c.empty()){
     cout<<c.top()<<" ";
     c.pop();
    }
    cout<<endl;
}
int main(){
    custom_stack c;

    c.push(50);
    c.push(1);
    c.push(40);
    c.push(30);
    c.push(2);
    c.push(20);
     c.push(0);
    c.push(10);

    print(c);
    cout<<c.getmin()<<endl;

    c.pop();
    c.pop();
    print(c);

    cout<<c.getmin()<<endl;
}