#include<bits/stdc++.h>
using namespace std;
//singly link list..
class listnode{
    public:
    int value;
    listnode *next;

    // listnode(int val):value(val){ //parameterised constructor..
    //     this->next=NULL;
    // }
        //or 
  
  //parameterised constructor..
    listnode(int value){
        this->value=value;
        this->next=NULL;
    }
};
int main(){
   listnode* node=new listnode(10);
   cout<<node->value<<endl;

}