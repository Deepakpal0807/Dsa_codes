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

    //total steps: (n+n-k-1) ~(2n-k) steps..
    listnode* rotate(listnode* head,int k){
        //1. find size of the linklist
        int n=0;
        listnode* temp=head;
        listnode* tail;
        while(temp!=NULL){
            if(temp->next==NULL){
                tail=temp;
            }

            temp=temp->next;
            n++;
        }
        k=k%n; //same as k time rotation..
        
        int j=n-k-1;
        //find the new tail of the linklist (n-k-1)
        temp=head;
        while(j--){
           temp=temp->next;
        }

        //temp are at teh k-1 node means the new tail of rotated linklist
        tail->next=head;
        head=temp->next;
        temp->next=NULL;

        return head;

    }


int main(){
        listnode* head=NULL;
        insertionathead(head,70);
        insertionathead(head,60);
        insertionathead(head,50);
        insertionathead(head,40);
        insertionathead(head,30);
        insertionathead(head,20);
        insertionathead(head,10);

        printlinklist(head);
        
        int k=13;
        head=rotate(head,k);
        printlinklist(head);
    }