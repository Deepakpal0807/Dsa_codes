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
        cout<<"End"<<endl;

        return ;
    }


    //getnode function to find the second last node..
    // listnode* getnode(listnode* head){
    //     while(head->next->next!= NULL){
    //         head=head->next;
    //     }
    //     return head;
    // }

    // //deletion at taill..
    // void deletionattail(listnode* &head){
    //     //corner case..
    //     //1.
    //         //means linklist is empty..
    //     if(head==NULL){ 
    //         return ;
    //     }
            //  if(head->next==NULL){
            //     //ll is one node
            //     //do deletion at head..
            //     listnode* temp=head;
            //     head=head->next;
            //     delete temp;
            // return ;
            //  }
    //     //find the second last node..
    //     listnode *secondlast=getnode(head);
    //     //store the address of the last node into temp
    //     listnode *temp=secondlast->next;
    //     //remove the link of last node from the link list..
    //     secondlast->next=NULL;
    //     //delete the last removed node..
    //     delete temp;d
    // }



    //by abhishek bhaiya..
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
    
int main(){
    listnode* head=NULL;
    insertionathead(head,50);
    // insertionathead(head,40);
    // insertionathead(head,30);
    // insertionathead(head,20);
    // insertionathead(head,10);

    printlinklist(head);
    deletionattail(head); //delete a node from the end of the linklist..
    printlinklist(head);

    

  
}