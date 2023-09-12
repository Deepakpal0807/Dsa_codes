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

    // code for deletion at index of node...

    
      void deletionattail(listnode* &head){
        if(head==NULL){
            return ; //measn linklist is empty..
        }
        if(head->next==NULL){
            //linklist has one node only.
            // then we call deletion at head... 
            listnode* temp=head;
            head=head->next;
            delete temp;
            return ;
        }


      //find the address of the last two node..
        listnode* prev=NULL;
        listnode* tail=head;
        while(tail->next!=NULL){
            prev=tail;
            tail=tail->next;
        }

      //remove the link of the last node from the linklist..
      prev->next=NULL;
      //delete the removed node from the linklist..
      delete tail;

    }
    listnode* getnode(listnode* head,int i){
        listnode* temp=head;
        while(temp!=NULL and i-- ){
            temp=temp->next;
        }
        return temp;
    }
   void deletionatindex(listnode* &head,int index){
    if(head==NULL){
        //if the linklist is empty..

        return ;
    }
    //2. if size of index is greater than the no of node in the linklist..
    
    // if(head->next==NULL){  //this case is not neccessary..
    //     //ll is one node only..
    //     //do deletion at head.
    //     listnode* temp=head;
    //     head=head->next;
    //     delete temp;
    //     return;
    // }
    if(index==0){
     //means deletion at head..
     listnode* temp=head;
     head=head->next;
     delete temp;
     return ;
    }
    listnode* curr=getnode(head,index);
    if(curr==NULL){
        //i>size of ll
        //i is invalid.
        return;
    }
    listnode* prev=getnode(head,index-1);


    prev->next=curr->next;
    delete curr;

    }
int main(){
    listnode* head=NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);

    printlinklist(head);

    deletionatindex(head,4);//indexing start form 0
     printlinklist(head);
}