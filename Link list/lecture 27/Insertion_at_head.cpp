#include<bits/stdc++.h>
using namespace std;

class listnode{
    public:

          int val;
          listnode *next;

    //parameterised constructor..
    listnode(int val){
        this->val=val;
        this->next=NULL;
    }
};
//Time:O(1)    //all work are take constant time..
     void insertionathead(listnode* &head,int val){  //call by refrence so the change will reflect..
        //take two varible as input Address of head and val
        //1. create a new node with new address and assign value in it
            listnode* n=new listnode(val);
        //2. copy address of the head node into next of new node..
            n->next=head;
        //3. make new node as head node...
            head=n;
    }


    // //BY using pass by value..
    // listnode* insertionathead(listnode* head,int val){
    // //  1. create a new node with new address and assign value in it
    //         listnode* n=new listnode(val);
    //     //2. copy address of the head node into next of new node..
    //         n->next=head;
    //     //3. make new node as head node...
    //         head=n;

    //         return head;
        
    // }


    void printlinklist(listnode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
        return;

    }
int main(){
    listnode* head=NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);
    insertionathead(head,0);



    //by using pass by value
    // head=insertionathead(head,50);
    // head=insertionathead(head,40);
    // head=insertionathead(head,30);
    // head=insertionathead(head,20);
    // head=insertionathead(head,10);
    // head=insertionathead(head,0);


    printlinklist(head);
    

}