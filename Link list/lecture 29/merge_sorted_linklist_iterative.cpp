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
     

     //space : O(1)   time : O(n+m)   // n and m are size of linklist..
    listnode* merge_iterative(listnode* head1,listnode* head2){
       listnode* dummy=new listnode (0);
       listnode* temp=dummy;
       while(head1!=NULL and head2!=NULL){


            if(head1->val < head2->val){
                   temp->next=head1;
                   head1=head1->next;
                   temp=temp->next;
                   
         }
         else{
            temp->next=head2;
                   head2=head2->next;
                   temp=temp->next;

         }

       }
       if(head1==NULL){
        temp->next=head2;
       }
       else
       temp->next=head1;
     
        
      
        return dummy->next;
        
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
            

    listnode* head= merge_iterative(head1,head2);
    printlinklist(head);
    }