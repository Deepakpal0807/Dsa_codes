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
void insertionathead(listnode* &head,int val){  
            listnode* n=new listnode(val);
      
            n->next=head;
       
            head=n;
    }


    void printlinklist(listnode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
      

        return ;
    }
    int sizeoflinklist_iterative(listnode* head){
      
        int size=0;
        while(head){// means while(head!=NULL)
            size++;
            head=head->next;
        }
        return size;
    }
    int sizeoflinklist_recursive(listnode* head){

        //base case.
        if(head==NULL){
            //means linklist is empty..
            return 0;
        }
        //recursive case.
        //1. recursively,compute the length of the linklist that start from the next node of head node..
        int a=sizeoflinklist_recursive( head->next);
        //2. return the size given by friend + 1( head node)..
        return 1+a;
    }

    int main(){
        listnode* head=NULL;
        insertionathead(head,50);
        insertionathead(head,40);
        insertionathead(head,30);
        insertionathead(head,20);
        insertionathead(head,10);

        printlinklist(head);
       int size=sizeoflinklist_iterative(head);

       cout<<size<<endl;
       size=sizeoflinklist_recursive(head);
       cout<<size<<endl;
    }