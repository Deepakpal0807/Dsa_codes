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
    listnode* merge(listnode* head1,listnode* head2){
        //base case...
        if(head1==NULL){
            
            return head2;
        }
        if(head2==NULL){
            return head1;
        }

        //recursive case..
        listnode *headfromfriend;
        listnode* head;
        if(head1->val < head2->val){
           head=head1;
           
           headfromfriend= merge(head1->next,head2);
           head->next=headfromfriend;
           return head;



        }
        
        else{
             head=head2;

       headfromfriend= merge(head1,head2->next);
       head->next=headfromfriend;
       return head;
        }
            }

    int main(){
        listnode* head1=NULL;
        insertionathead(head1,70);
        insertionathead(head1,50);
        insertionathead(head1,30);
        insertionathead(head1,10);

        listnode* head2=NULL;
        insertionathead(head2,80);
        insertionathead(head2,60);
        insertionathead(head2,40);
        insertionathead(head2,20);

        printlinklist(head1);
        printlinklist(head2);

        listnode* head=merge(head1,head2);
        printlinklist(head);
    }